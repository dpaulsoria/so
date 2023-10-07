#include <stdio.h>

int findMax();

int main() {

    int array[] = {12, 5, 23, 8, 19, 42, 7};
    // Esto calcula la longitud del arreglo
    int size = sizeof(array) / sizeof(array[0]);

    int max = findMax(array, size);

    if (max != -1) {
        printf("El elemento mas grande en el arreglo es %d\n", max);
    } else {
        printf("El arreglo esta vacio o tiene una longitud no valida\n");
    }

    return 0;
}

int findMax(int array[], int size) {
    if (size <= 0) {
        return -1;
    }

    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}