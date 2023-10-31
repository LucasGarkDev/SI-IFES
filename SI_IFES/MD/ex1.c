/*Escreva uma função recursiva para calcular o valor
de uma base x elevada a um expoente y. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int potencia(int base, int expoente){
    if (expoente == 1){
        return 1;
    }else {
        return base+potencia(base,expoente+1); 
    }
}

int main(){
    int n, e;
    printf("Base: ");
    scanf("%d", &n);
    printf("Expoente: ");
    scanf("%d", &e);
    printf("%d\n", potencia(e,n));
    return 0;
}