#include <stdio.h>
#include <string.h>

void reverseString();

int main()
{
    char string[100];

    printf("Ingrese una frase a invertir: ");

    fgets(string, sizeof(string), stdin);

    size_t len = strlen(string);

    if (len > 0 && string[len - 1] == '\n')
    {
        string[len - 1] = '\0';
    }

    reverseString(string);

    printf("La frase invertida es: %s\n", string);

    return 0;
}

void reverseString(char string[])
{
    int size = strlen(string);
    int i, j;

    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        char tmp = string[i];
        string[i] = string[j];
        string[j] = tmp;
    }
}
