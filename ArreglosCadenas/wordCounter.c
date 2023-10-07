#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int wordCounter();

int main()
{
    char string[1000];

    printf("Ingrese una frase: ");
    fgets(string, sizeof(string), stdin);

    // Eliminar el caracter de nueva linea si esta presente
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n')
    {
        string[len - 1] == '\0';
    }

    int cant = wordCounter(string);

    printf("El numero de palabras en la cadena es %d\n", cant);

    return 0;
}

int wordCounter(const char *string)
{
    int counter = 0;
    bool insideWord = false;

    // Verifica que no estoy en el final de la linea
    for (int i = 0; string[i] != '\0'; i++)
    {
        // Verificando que no sea un espacio, enter o tabulacion, es decir, que sea un caracter de texto
        if (string[i] != ' ' && string[i] != '\n' && string[i] != '\t')
        {
            if (!insideWord)
            {
                counter++;
                insideWord = true;
            }
        }
        else
        {
            // En caso de que se encuentre un
            // - espacio
            // - enter
            // - tabulacion
            insideWord = false;
        }
    }

    return counter;
}
