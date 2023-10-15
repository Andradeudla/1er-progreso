#include <stdio.h>
int main() {
    int num1, num2, i;

    printf("Introduce el primer número(ingrese un numero positivo): ");
    scanf("%d", &num1);
            
    if(num1 < 0) {
        printf("Debe ingresar un número positivo.\n");
        }
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    
    return 0;
}