/*Crie a funçao imprimir recursivamente*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

void imprimir(int *vetor, int tam){
    if (tam == 1){
        printf(" %d ", vetor[tam-1]);
    }else{
        imprimir(vetor,tam-1);
        printf(" %d ", vetor[tam-1]); 
    }
}

int main(){
    int i = 5;
    int vetor[5] = {15,76,43,92,23};
    printf("\n%s\n", INICIO);
    printf("\n%s\n", RESULTADO);
    imprimir(vetor, i);
    printf("\n%s\n", CORTE);
    return 0;
}