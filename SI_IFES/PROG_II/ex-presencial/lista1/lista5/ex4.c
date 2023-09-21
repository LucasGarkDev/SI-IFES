/*Implemente um programa para gerar 20 números aleatórios entre 1 e 100 (min=1 e max=100) e
armazene em um vetor. Percorra esse vetor e coloque os números pares em um vetor
chamado pares e os números ímpares em outro vetor chamado ímpares. Imprima os três
vetores.
DICA: utilize um contador para cada vetor.
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
#define MAX 20

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
    int i;
    for (i = 0; i <= quanti; i++){
        vetor[i] = aletorio(100); 
    }
}

void distribuir(int *vetor, int *par, int *impar, int quanti){
    int i, j = 0, k = 0;
    for (i = 0; i < quanti; i++){
        if (vetor[i] % 2 == 0){
            par[j] = vetor[i];
            j++;
        }else{
            impar[k] = vetor[i];
            k++;
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
    srand((unsigned)time(NULL));
    int vetor[MAX];
    int pares[MAX/2];
    int impares[MAX/2];
    // int quanti = pedirQuanti(vetor);
    preencherVetor(vetor,MAX);
    distribuir(vetor,pares,impares,MAX);
    imprimir(vetor,MAX);
    printf("\n");
    imprimir(pares,MAX/2);
    printf("\n");
    imprimir(impares,MAX/2);
    return 0;
}
