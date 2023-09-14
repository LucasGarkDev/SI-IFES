#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 20;

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de espaços no vetor: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

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

void inserirString(char *vetor, int quanti){
    printf("Digite o texto no vetor: ");
    fgets(vetor,quanti,stdin);
    limparBuffer();
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
    char *nome;
    char *ponteiro;
    int quanti = pedirQtde(), i;
    alocarMEM(nome,quanti);
    inserirString(nome,quanti);
    int numPalavra = (strlen(nome)/2);
    for (i = 0; i < quanti; i++){
        *ponteiro = strchr(nome,'1');
    }
    

    return 0;
}
