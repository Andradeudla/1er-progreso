#include <stdio.h>
int main() {
    int num, i, suma = 0;

    do
    {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &num);
        
        if(num < 0) {
            printf("Debe ingresar un número positivo.\n");
        }
    } while (num < 0);

    for (i = 0; i <= num ; i++)
    {
        suma = suma + i;
    }

    return 0;
}