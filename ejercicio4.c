#include <stdio.h>
int main() {
    int num1, num2, i;
    
    do
    {
    
    printf("Introduce el primer número(ingrese un numero positivo): ");
    scanf("%d", &num1);
            
    if(num1 < 0) {
        printf("Debe ingresar un número positivo.\n");
        }
    } while (num1 < 0);

    do
    {
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    
    if(num2 < 0) {
        printf("Debe ingresar un número positivo.\n");
        }

    } while (num2 < 0);

    for(i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    printf("Son los números enteros entre %d y %d\n", num1, num2);

    return 0;
}