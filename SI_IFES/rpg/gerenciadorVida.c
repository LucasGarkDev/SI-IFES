#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

void alocarMEM(int **vetor){
    int num;
    printf("Digite a quantidade de monstros: ");
    scanf("%d", &num);
    *vetor = (int *) malloc(num * sizeof(int));
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
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int *barrasVidasMonst;
    alocarMEM(&barrasVidasMonst);
    
    return 0;
}
