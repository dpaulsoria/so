#include <stdio.h>
#include <stdlib.h>

int calculateMCD();

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("Este programa recibe un argumento\n");
        return 1;
    }

    int number1, number2;
    char *endptr;

    number1 = strtod(argv[1], &endptr);

    if (*endptr != '\0') {
        printf("Error: %s no es un numero\n", argv[1]);
        return 1;
    }

    number2 = strtod(argv[2], &endptr);

    if (*endptr != '\0') {
        printf("Error: %s no es un numero\n", argv[1]);
        return 1;
    }

    int result = calculateMCD(number1, number2);

    printf("El MCD de %d y %d es %d\n", number1, number2, result);

    return 0;
}

// Este enfoque utiliza el algoritmo de Euclides
// El algoritmo de Euclides es un método eficiente para
// calcular el MCD de dos números enteros. Se basa en la
// idea de que el MCD de dos números no cambia si reemplazamos
// uno de los números por el residuo de su división por el otro
// número, y repetimos este proceso hasta que uno de los números
// sea igual a cero. En ese momento, el otro número será el MCD.

int calculateMCD(int a, int b) {
    int tmp;
    
    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}