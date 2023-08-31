/*. Implemente um programa que armazene em um vetor todos os números inteiros de 100 a 1
(em ordem decrescente). Após isso, o programa deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#include <stdlib.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

void acrescenta(int vetor[],int quanti){
    int i;
    int num = 100;
    for (i = 0; i < quanti; i++){
        vetor[i] = num;
        num--;
    }
    
}

void imprimir(int vetor[], int quanti){
    int i;
    printf("\n%s\n", RESULTADO);
    for (i = 0; i < 100; i++){
        printf(" %d\n", vetor[i]);
    }
}

int main(){
    printf("\n%s\n", INICIO);
    int vetor[MAX];
    int quanti = 100;
    acrescenta(vetor,quanti);
    imprimir(vetor,quanti);
    return 0;
}
