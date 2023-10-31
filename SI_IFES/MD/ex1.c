/*Escreva uma função recursiva para calcular o valor
de uma base x elevada a um expoente y. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int potencia(int cont){
    if (cont == 1){
        return cont;
    }else {
        return cont*potencia(cont+1); 
    }
}

int main(){
    int n;
    printf("Numeros:");
    scanf("%d", &n);
    printf("%d\n", potencia(n));
    return 0;
}