#include <stdio.h>
#include <string.h>

int main() {
    int result = 0; // Inicializamos result a 0
    char input[100]; // Usamos una cadena de caracteres para la entrada

    while (1) { // Usamos un bucle infinito
        printf("Ingrese un numero para sumar (o 'x' para salir): ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Error al leer la entrada.\n");
            break; // Salimos del bucle si hay un error de entrada
        }

        // Eliminamos el carácter de nueva línea si existe
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Comparamos la entrada con "x" para salir
        if (strcmp(input, "x") == 0 || strcmp(input, "X") == 0) {
            break; // Salimos del bucle si la entrada es "x" o "X"
        }

        int number;
        if (sscanf(input, "%d", &number) != 1) {
            printf("Error: Ingrese un numero valido o 'x' para salir.\n");
        } else {
            result += number;
        }
    }

    printf("La suma total es: %d\n", result);

    return 0;
}

// Debes considerar la diferencia entre 'x' y "x"