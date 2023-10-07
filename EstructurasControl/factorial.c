#include <stdio.h>

int factorial();

int main() {

    int number;

    printf("Ingrese el numero: ");

    if (scanf("%d", &number) != 1) {
        // La funcion scanf no pudo leer el numero entero
        printf("Error: Debes introducir un numero\n");
        return 1;
    }

    int result = factorial(number);

    printf("El factorial es: %d\n", result);
    return 0;
}

int factorial(int number) {

    if (number == 0) {
        return 1;
    }

    return number * factorial(number - 1);
} 