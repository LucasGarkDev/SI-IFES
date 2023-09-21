/*. Implemente um programa que armazene em um vetor todos os números inteiros de 100 a 1
(em ordem decrescente). Após isso, o programa deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

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
    for (i = quanti; i >= 0; i--){
        vetor[i] = i;
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