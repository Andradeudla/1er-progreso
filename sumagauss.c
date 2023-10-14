#include <stdio.h>
int main() {
    int num, i, suma = 0;

    do
    {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);
    } while (num < 0);
    
    return 0;
}