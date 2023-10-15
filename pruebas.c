#include <stdio.h>

int main() {
    int num, digito, suma = 0;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    while(num != 0) {
        digito = num % 10;
        if(digito % 2 == 0) {
            suma += digito;
        }
        num /= 10;
    }

    printf("La suma de los dígitos pares es: %d \n", suma);

    return 0;
}

