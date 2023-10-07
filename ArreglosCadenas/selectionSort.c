#include <stdio.h>

int selectionSort(int array[], int n);

int main()
{
    int array[] = {64, 25, 12, 22, 11};

    int size = sizeof(array) / sizeof(array[0]);

    printf("Arreglo antes del ordenamiento:\n");

    for (int i = 0; i < size;  i++) {
        printf("%d\n", array[i]);
    }

    selectionSort(array, size);

    printf("Arreglo despues del ordenamiento:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
 
int selectionSort(int array[], int n)
{
    int i, j, min, tmp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
    }

    tmp = array[i];
    array[i] = array[min];
    array[min] = tmp;
}