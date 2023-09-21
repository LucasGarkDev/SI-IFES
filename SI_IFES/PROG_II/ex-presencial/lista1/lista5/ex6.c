/*Use a função do programa anterior para agora gerar dois vetores 
com 100 números aleatórios. Para cada elemento do vetor 2, 
verificar se ele existe no vetor 1. Se existir, então retirar 
ele do vetor 2. Mostre os números que foram retirados. Para 
testar, você deverá imprimir os dois vetores antes e depois 
dessa operação. 
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

void preencherVetor(int *vetor, int *vetor2, int quanti, int desci){
    int i, verifica, guarda;
    if (desci == 1){
        for (i = 0; i < quanti; i++){
            do{
                guarda = aletorio(1000);
                verifica = pesquisar(vetor,quanti,guarda);
            } while (verifica != -1);
            vetor[i] = guarda;
        }
    }else{
        for (i = 0; i < quanti; i++){
            do{
                guarda = aletorio(1000);
                verifica = pesquisar(vetor,quanti,guarda);
            } while (verifica != -1);
            vetor2[i] = guarda;
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
    int vetor1[MAX];
    int vetor2[MAX];
    preencherVetor(vetor1,vetor2,MAX,1);
    imprimir(vetor1,MAX);
    imprimir(vetor2,MAX);
    // int quanti = pedirQuanti(vetor);
    preencherVetor(vetor1,vetor2,MAX,2);
    imprimir(vetor1,MAX);
    imprimir(vetor2,MAX);
    return 0;
}

