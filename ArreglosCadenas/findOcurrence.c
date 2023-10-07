#include <stdio.h>
#include <string.h>

int findOcurrence(char *string, char *word);

int main()
{
    char word[100] = "Hola mundo mundo";

    int occurrence = findOcurrence(word, "mundo");
    printf("Palabra a buscar: %s\n", "mundo");
    printf("Ocurrencias en `%s` son %d\n", word, occurrence);

    return 0;
}

int findOcurrence(char *string, char *word)
{
    int counter = 0;
    int word_len = strlen(word);

    for (int i = 0; string[i] != '\0'; i++)
    {
        // Verificando que no sea un espacio, enter o tabulación, es decir, que sea un caracter de texto
        if (string[i] != ' ' && string[i] != '\n' && string[i] != '\t')
        {
            // Comparando uno por uno los caracteres de word
            if (strncmp(&string[i], word, word_len) == 0)
            {
                // Encontramos una ocurrencia
                counter++;
            }
        }
        else
        {
            // En caso de que se encuentre un espacio, enter o tabulación, no hace nada
        }
    }

    return counter;
}
