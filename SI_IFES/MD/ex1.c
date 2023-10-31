/*Escreva uma função recursiva para calcular o valor
de uma base x elevada a um expoente y. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int potencia(int base, int expoente){
    if (expoente == 0){
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main(){
    int n, m, e;
    printf("Base: ");
    scanf("%d", &n);
    printf("Expoente: ");
    scanf("%d", &m);
    e = potencia(n,m);
    printf("\n%s\n", RESULTADO);
    printf("X elevado a y e: %d\n", e);
    return 0;
}