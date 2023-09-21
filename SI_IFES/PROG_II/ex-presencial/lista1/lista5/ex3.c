/*Implemente um programa que percorra os números inteiros de 1 a 20 e armazene em um vetor
da seguinte forma: se a posição do vetor for par, colocar o número ao quadrado; se a posição
do vetor for ímpar, colocar o número ao cubo. Ao final, imprimir esse vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 21

// int pedirQuanti(int *vetor){
//     int num;
//     int tamanho = sizeof(vetor)/sizeof(vetor[0]);
//     do{
//         printf("Digite o tamanho do vetor: ");
//         scanf("%d", &num);
//     } while ((num <= 0)||(num > tamanho));
//     return num;
// }

void preencherVetor(int *vetor, int quanti){
    int i;
    for (i = 0; i <= quanti; i++){
        if (i % 2 == 0){
            vetor[i] = pow(i,2);
        }else{
            vetor[i] = pow(i,3);
        }
    }
}

void imprimir(int *vetor, int quanti){
    int i;
    printf("\n%s\n", RESULTADO);
    for (i = 0; i < quanti; i++){
        printf("%d,", vetor[i]);
    }
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    int vetor[MAX];
    // int quanti = pedirQuanti(vetor);
    preencherVetor(vetor,MAX);
    imprimir(vetor,MAX);
    return 0;
}