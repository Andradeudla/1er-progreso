#include <stdio.h>
int main (){
    int numero, contador, factorial;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Numero equivocado, ingrese un numero positivo\n");

    return 0;
}