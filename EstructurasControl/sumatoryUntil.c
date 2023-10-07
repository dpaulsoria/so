#include <stdio.h>

int sumatory_recursive();
int sumatory_for();
int sumatory_while();

// Esto se puede hacer con dos enfoques
// 1. Utilizando recursion y sumando desde el numero hasta el 0
// 2. Utilizando un for o chiclo while

int main() {

    int result, number;

    printf("Introduce un numero: ");

    if (scanf("%d", &number) != 1) {
        // La funcion scanf no pudo leer el numero entero
        printf("Error: Debes introducir un numero\n");
        return 1;
    }

    // result = sumatory_recursive(number);
    // result = sumatory_for(number);
    result = sumatory_while(number);

    printf("La sumatoria de enteros desde 1 hasta %d es %d\n", number, result);
    return result;
}

int sumatory_recursive(int number) {
    // Condicion de salida
    if (number == 0) {
        return 0;
    }

    return number + sumatory_recursive(number - 1);
}

int sumatory_for(int number) {
    int result = 0;
    int tmp = 0;

    for (int i = 0; i < number; i++) {
        tmp++;
        result += tmp;
    }

    return result;
}

int sumatory_while(int number) {
    int result = 0;
    int tmp = 0;

    while (number != tmp) {
        tmp++;
        result += tmp;
    }

    return result;
}