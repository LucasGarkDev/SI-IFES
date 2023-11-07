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

int contagemDeModo(int n){
    n--;
    if (n == 1){
        return n;
    }else{
        return n + contagemDeModo(n-1);
    }
}

int main(){
    int res,n;
    printf("\n%s\n", INICIO);
    res = contagemDeModo(n);
    printf("\n%s\n", RESULTADO);
    printf("O numero de modos do numero %d: %d\n",n,res);
    printf("\n%s\n", CORTE);
    return 0;
}