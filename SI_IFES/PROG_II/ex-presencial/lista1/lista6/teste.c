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

int pedirNumNPC(){
    int num;
    do{
        printf("Digite a quantidade de npc's nesse combate: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

char inserirNome(char *vetor1,char *vetor2, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("Digite o %d nome: ", i+1);
        fgets(vetor1,20,stdin);
        limpaBuffer();
        if (strcmp(vetor2[i-1],vetor1) == 0){
            vetor1 = strcat(vetor1,'1');
        }
    }
    return vetor1;
}

void inserirDados(char *barra, char *nome, int quanti){
    int i;
    char armazena;
    for ( i = 0; i < quanti; i++){
        armazena = inserirNome(nome,barra,quanti);
        strcpy(armazena,nome);
        barra[i] = armazena;
    }
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
    char *barraIniciativa;
    char nome[20];
    int quanti = pedirNumNPC();
    alocarMEM(&barraIniciativa,quanti);
    inserirDados(barraIniciativa,nome);
    imprimir(barraIniciativa,quanti);
    return 0;
}
