/*Implemente um programa que percorra os números inteiros de 1 a 20 e armazene em um vetor
da seguinte forma: se a posição do vetor for par, colocar o número ao quadrado; se a posição
do vetor for ímpar, colocar o número ao cubo. Ao final, imprimir esse vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

void acrescenta(int vetor[],int quanti){
    int i;
    int num = 1;
    for (i = 0; i < quanti; i++){
        if (num % 2 == 0){
            vetor[i] = potencia(num,2);
        }else{
            vetor[i] = potencia(num,3);
        }
        num++;
    }
}

int potencia(int num,int deci){
    return pow(num,deci);
}

void imprimir(int vetor[], int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        printf(" %d\n", vetor[i]);  
    }
}

int main(){
    printf("\n%s\n", INICIO);
    int vetor[MAX];
    int quanti = 20;
    acrescenta(vetor,quanti);
    imprimir(vetor,quanti);
    return 0;
}
