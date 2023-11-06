/*Desafio: Crie uma função recursiva em C chamada contagem_de_modo que conte o número de 
maneiras de representar um número n como uma soma de inteiros positivos, considerando 
diferentes permutações. Por exemplo, para n = 4, existem cinco maneiras de representá-lo: 
4, 3+1, 2+2, 2+1+1 e 1+1+1+1.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int maiorVet(int *vet, int tam) {
    int maior, resto;
    if (tam == 1) {
        return vet[0];
    } else {
        resto = maiorVet(vet, tam - 1);
        if (vet[tam-1] > resto) {
            return vet[tam - 1]; 
        } else {
            return resto; 
        }
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