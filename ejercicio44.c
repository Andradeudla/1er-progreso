#include <stdio.h>
int main (){
    int numero, contador, factorial;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Numero equivocado, ingrese un numero positivo\n");
    
    else {
        factorial = 1;  
        
        for (contador = 1; contador <= numero; contador = contador + 1) {
            factorial = factorial * contador; 
        }
        printf("El factorial es: %d\n", factorial);
    }

    return 0;
}