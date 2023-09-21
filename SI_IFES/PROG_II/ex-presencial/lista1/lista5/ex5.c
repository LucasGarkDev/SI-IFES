/*Implemente uma função para gerar 100 números aleatórios (entre 1 e 1000) e armazenar no
vetor. Porém não pode ter números repetidos. Para isso, toda vez que gerar um número
aleatório, chamar outra função para pesquisar no vetor se esse número existe. Se existir, não
inserir e gerar outro número aleatório. No final imprima esse vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

int pesquisar(int *vetor, int quanti, int pesq){
    int i;
    for (i = 0; i < quanti; i++){
        if (vetor[i] == pesq){
            return i;
        } 
    }
    return -1;
}
// int pedirQuanti(int *vetor){
//     int num;
//     int tamanho = sizeof(vetor)/sizeof(vetor[0]);
//     do{
//         printf("Digite o tamanho do vetor: ");
//         scanf("%d", &num);
//     } while ((num <= 0)||(num > tamanho));
//     return num;
// }
int aletorio(int max) {
    return (rand() % max) + 1;
}

void preencherVetor(int *vetor, int quanti){
    int i, verifica, guarda;
    for (i = 0; i < quanti; i++){
        do{
            guarda = aletorio(1000);
            verifica = pesquisar(vetor,quanti,guarda);
        } while (verifica != -1);
        vetor[i] = guarda;
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
    srand((unsigned)time(NULL));
    int vetor[MAX];
    // int quanti = pedirQuanti(vetor);
    preencherVetor(vetor,MAX);
    imprimir(vetor,MAX);
    return 0;
}
