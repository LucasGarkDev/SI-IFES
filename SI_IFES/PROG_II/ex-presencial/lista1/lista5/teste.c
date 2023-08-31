#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

int lerDados(int *vetor, int *quanti){
    char continuar;
    do{
        vetor[*quanti] = lerIdade();
        (*quanti)++;
        printf("Deseja continuar? ");
        scanf(" %c", &continuar);

    } while (toupper(continuar) == 'S');
}

void remover(int *vetor, int *qtde, int pos){
    int i;
    for (i = pos; i < (*qtde)-1; i++){
        vetor[i] = vetor[i+1];
    }
    (*qtde)--;
}

void imprimir(int *vetor, int tamanho){
    int i;
    printf("\n%s\n", RESULTADO);
    printf("O vetor completo: ");
    for (i = 0; i < tamanho; i++){
        vetor[i] = lerIdade();
    }
    printf("\n%s\n", CORTE);
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int vet1[MAX];
    int quanti = 0;

    lerDados(vet1,&quanti);
    imprimir(vet1,quanti);

    return 0;
}
