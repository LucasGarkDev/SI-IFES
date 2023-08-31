/*Implemente um programa para gerar 20 números aleatórios entre 1 e 100 (min=1 e max=100) e
armazene em um vetor. Percorra esse vetor e coloque os números pares em um vetor
chamado pares e os números ímpares em outro vetor chamado ímpares. Imprima os três
vetores.
DICA: utilize um contador para cada vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

int aleatorio (int max) {
    return ( rand() % max) + 1;
}

int distribui(int vetorPadra[],int vetorPar[],int vetorImpar[],int quanti){
    int i = 0, j = 0,k;
    for (k = 0; k < quanti; k++){
        if (vetorPadra[k] % 2 == 0){
            vetorPar[i] = vetorPadra[k];
            i++;
        }else{
            vetorPar[j] = vetorPadra[k];
            j++;
        }
    }
    return i;
}

void acrescenta(int vetor[],int quanti){
    int i;
    int num;
    for (i = 0; i < quanti; i++){
        num = aleatorio(100);
        vetor[i] = num;
    }
}

void imprimir(int vetor[], int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        printf(" %d\n", vetor[i]);  
    }
    printf("\n%s\n", CORTE);
}

int main(){
    printf("\n%s\n", RESULTADO);
    int vetorPadrao[MAX];
    int vetorPar[MAX];
    int vetorImpar[MAX];
    int quanti1 = 20;
    int quanti2;
    acrescenta(vetorPadrao,quanti1);
    quanti2 = distribui(vetorPadrao,vetorPar,vetorImpar,quanti2);
    imprimir(vetorPar,quanti2);
    imprimir(vetorImpar,20-quanti2);
    return 0;
}
