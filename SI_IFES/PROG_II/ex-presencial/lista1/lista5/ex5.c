/*Implemente uma função para gerar 100 números aleatórios (entre 1 e 1000) e armazenar no
vetor. Porém não pode ter números repetidos. Para isso, toda vez que gerar um número
aleatório, chamar outra função para pesquisar no vetor se esse número existe. Se existir, não
inserir e gerar outro número aleatório. No final imprima esse vetor.
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

void acrescentar(int vetor[],int quanti){
    int i, num;
    for (i = 0; i < quanti; i++){
        do{
            num = aleatorio(1000);
            vetor[i] = num;
        } while (vetor[i] == vetor[i-1]);
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
    int vetor[MAX];
    int quanti = 100;
    
    return 0;
}
