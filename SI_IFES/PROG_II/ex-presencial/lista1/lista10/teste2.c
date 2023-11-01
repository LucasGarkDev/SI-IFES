/*Implemente uma função recursiva para encontrar o maior
elemento de um vetor de números inteiros*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int maiorVet(int *vet, int tam){
    if (tam == 1){
        return vet[0];
    } else {
        return ;
    }
}

int main(){
    int res,i = 5;
    int vetor[5] = {9,76,43,12,23};
    printf("\n%s\n", INICIO);
    res = maiorVet(vetor, i);
    printf("\n%s\n", RESULTADO);
    printf("O maior do vetor e: %d\n",res);
    printf("\n%s\n", CORTE);
    return 0;
}