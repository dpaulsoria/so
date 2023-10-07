#include <stdio.h>

double f_to_c();
double c_to_f();

int main() {
    int option;
    double temperature;

    printf("Seleccione la operación a realizar:\n");
    printf("1. Convertir de Fahrenheit a Celsius\n");
    printf("2. Convertir de Celsius a Fahrenheit\n");
    scanf("%d", &option);

    if (option != 1 && option != 2) {
        printf("Opción no válida.\n");
        return 1;
    }

    printf("Ingrese la temperature: ");
    scanf("%lf", &temperature);

    double result;

    if (option == 1) {
        result = f_to_c(temperature);
        printf("%.2lf grados F son %.2lf grados C\n", temperature, result);
    } else {
        result = c_to_f(temperature);
        printf("%.2lf grados C son %.2lf grados F\n", temperature, result);
    }

    return 0;
}

double f_to_c(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

double c_to_f(double c) {
    return (c * 9.0 / 5.0) + 32.0;
}