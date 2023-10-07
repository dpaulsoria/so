#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isOdd_scanf();
int isOdd_fgets();
int isOdd();

int main() {
    return isOdd_fgets();
    // return isOdd_scanf();
};

int isOdd_scanf() {
    int number;

    printf("> SCANF <\n");
    printf("Ingrese un numero: ");
    
    if (scanf("%d", &number) != 1) {
        // La funcion scanf no pudo leer el numero entero
        printf("Error: Debes introducir un numero\n");
        return 1;
    }

    printf("El numero introducido es: %d\n", number);

    int isOdd_result = isOdd(number);
    if (isOdd_result == 0) {
        printf("El numero es par\n");
        return isOdd_result;
    }

    printf("El numero es impar\n");
    return isOdd_result;
}

int isOdd_fgets() {
    char buffer[100];

    printf("> FGETS <\n");
    printf("Ingrese un numero: ");

    fgets(buffer, sizeof(buffer), stdin);

    // Eliminar el caracter de enter "\n" si existe
    size_t len = strlen(buffer); // strlen esta declarado en <sting.h>

    if (len > 0 && buffer[len - 1] == '\n') {
        // Reemplaza el  '\n' con el terinador nulo
        buffer[len - 1] = '\n';
    }

    // Verificar si es un numero
    // Intentar convertir la cadena en un numero usando strtol
    char *endptr;
    long number = strtol(buffer, &endptr, 10);

    // Verifica si la conversion fue exitosa y si no hay caracteres adicionales

    if (*endptr == '\0' || *endptr == '\n') {
        printf("El numero introducido es: %ld\n", number);
    } else {
        printf("Error: Debes introducir un numero\n");
        return 1;
    }

    int isOdd_result = isOdd(number);
    if (isOdd_result == 0) {
        printf("El numero es par\n");
        return isOdd_result;
    }

    printf("El numero es impar\n");
    return isOdd_result;
}

int isOdd(int number) {
    if ((number % 2) == 0) {
        return 0;
    }
    return 1;
}