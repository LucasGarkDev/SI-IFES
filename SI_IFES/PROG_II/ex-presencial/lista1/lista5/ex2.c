/*Implemente um programa que armazene em um vetor todos os números inteiros de 100 a 200.
Após isso, o programa deve imprimir todos os múltiplos de 5 armazenados nesse vetor.
*/

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
        num++;
    }
    
}

int multiplo5(int num){
    if(num % 5 == 0){
        return num;
    }else{
        return -1;
    } 
}

void imprimir(int vetor[], int quanti){
    int i, res;
    for (i = 0; i < quanti; i++){
        res = multiplo5(vetor[i]);
        if (res != -1){
            printf(" %d\n", res);
        }
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
