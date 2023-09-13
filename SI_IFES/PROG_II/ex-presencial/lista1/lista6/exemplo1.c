#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 20;

void limparBuffer(){
    int ch;
    do{
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

void alocarMEM(char **vetor, int tamanho){
    int num;
    *vetor = (char *) malloc(tamanho * sizeof(char));
}

void imprimir(char *vetor, int tamanho){
    int i;
    printf("\n%s\n", RESULTADO);
    printf("O vetor completo: ");
    for (i = 0; i < tamanho; i++){
        printf("%s\n",vetor[i]);
    }
    printf("\n%s\n", CORTE);
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    
    return 0;
}
