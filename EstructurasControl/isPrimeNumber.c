#include <stdio.h>

int isPrimeNumber();

int main() {
    int bottom = 1;
    int top = 10;

    for (int i = bottom; i < top + 1; i++) {
        printf("El numero a comprobar: %d\n", i);
        int isPrime = isPrimeNumber(i);
        if (isPrime == 1) {
            printf("El numero no es primo\n");
        } else {
            printf("El numero es primo\n");
        }
        
    }
}

int isPrimeNumber(int number) {
    if (number <= 1) {
        // 0 y 1 no son primos
        return 1;
    }

    // Comprobar divisibilidad desde 2 hasta la raiz cuadrada del numero
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 1;
            // El numero es divisible, no es primo
        }
    }

    return 0;
}

// Estrategia

// Por supuesto, puedo explicarlo con más detalle utilizando un ejemplo concreto.

// La estrategia para verificar si un número es primo se basa en la siguiente idea: un número primo es aquel que solo es divisible por 1 y por sí mismo. Entonces, si podemos encontrar algún divisor distinto de 1 y del propio número, entonces sabemos que el número no es primo.

// Vamos a considerar un ejemplo con el número 7 para demostrar la estrategia:

// Tomamos el número que queremos verificar, que es 7 en este caso.
// Comenzamos probando si es divisible por 2. Si dividimos 7 entre 2, obtenemos un cociente de 3 y un residuo de 1. El residuo es diferente de cero, lo que significa que 7 no es divisible por 2.
// Luego, probamos con el siguiente número, que es 3. Si dividimos 7 entre 3, obtenemos un cociente de 2 y un residuo de 1 nuevamente. El residuo sigue siendo diferente de cero, lo que indica que 7 no es divisible por 3.
// Continuamos probando con números más grandes. Intentamos dividir 7 por 4, 5, 6 y 7. En todos estos casos, obtendríamos un residuo diferente de cero, lo que significa que 7 no es divisible por ninguno de estos números.
// Dado que hemos probado todos los números enteros desde 2 hasta la raíz cuadrada de 7 (que es aproximadamente 2.65), y en ningún caso hemos encontrado un divisor que produzca un residuo igual a cero, podemos concluir que 7 es primo.

// La clave aquí es que no necesitamos probar todos los números hasta 7 para determinar que es primo. Solo necesitamos probar hasta la raíz cuadrada de 7, lo que ahorra tiempo en la verificación de primos para números más grandes.

// Este mismo enfoque se aplica para verificar si un número es primo en general. Comprobamos divisibilidad solo hasta la raíz cuadrada del número, y si no encontramos ningún divisor diferente de 1 y del propio número, entonces el número es primo.