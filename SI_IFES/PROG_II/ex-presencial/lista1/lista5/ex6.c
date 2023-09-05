/*Use a função do programa anterior para agora gerar dois vetores 
com 100 números aleatórios. Para cada elemento do vetor 2, 
verificar se ele existe no vetor 1. Se existir, então retirar 
ele do vetor 2. Mostre os números que foram retirados. Para 
testar, você deverá imprimir os dois vetores antes e depois 
dessa operação. 
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

int pesquisar(int vetor[],int quanti,int pesq){
    int i;
    for(i = 0; i < quanti; i++){ 
        if(vetor[i] == pesq){
            return i;
        }
    }
    return -1;
}

void acrescentar(int vetor[],int quanti, int vetor2[]){
    int i, num, verifica;
    num = aleatorio(1000);
    vetor[0] = num;
    for (i = 1; i < quanti; i++){
        do{
            num = aleatorio(1000);
            verifica = pesquisar(vetor2,quanti,num);
            vetor[i] = num;
        } while (verifica != -1);
    } 
}

void imprimir(int vetor[], int quanti, int num){
    int i;
    printf("Este e o vetor %d:\n", num);
    for (i = 0; i < quanti; i++){
        printf(" %d,", vetor[i]);  
    }
    printf("\n%s\n", CORTE);
}

int main(){
    printf("\n%s\n", RESULTADO);
    int vetor1[MAX];
    int vetor2[MAX];
    int quanti = 100;
    acrescentar(vetor1,quanti,vetor1);
    acrescentar(vetor2,quanti,vetor1);
    imprimir(vetor1,quanti,1);
    imprimir(vetor2,quanti,2);
    return 0;
}
