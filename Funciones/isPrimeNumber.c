#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Este programa recibe un argumento\n");
        return 1;
    }

    int number;
    char *endptr;

    number = strtod(argv[1], &endptr);

    if (*endptr != '\0')
    {
        printf("Error: %s no es un numero\n", argv[1]);
        return 1;
    }

    if (number <= 1)
    {
        printf("No es primo\n");
        return 1; // 0 y 1 no son primos
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("No es primo\n");
            return 1;
        }
    }

    printf("Es primo\n");
    return 0;
}