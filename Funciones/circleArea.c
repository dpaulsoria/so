#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Uso %s argumentos\n", argv[0]);
        return 1;
    }

    // Convierte el argumento a un numero flotante
    // double r = atof(argv[1]);
    double r;
    char *endptr; // Puntero para verificar que la conversion fue exitosa

    // Convierte el argumento a un numero punto flotante
    r = strtod(argv[1], &endptr);

    // Verifica si la conversion fue exitosa
    if (*endptr != '\0') {
        printf("Error: %s no es un numero\n", argv[1]);
        return 1;
    }

    if (r < 0) {
        printf("El radio no puede ser 0 o menor a 0\n");
        return 1;
    }

    printf("Este programa calculara el area de un circulo por su radio\n");
    printf("El Radio ingresado es %.2lf\n", r);
    printf("El numero pi es %.2lf\n", M_PI);

    double area = M_PI * r * r;

    printf("El area del circulo es: %.2lf\n", area);

    return 0;
}