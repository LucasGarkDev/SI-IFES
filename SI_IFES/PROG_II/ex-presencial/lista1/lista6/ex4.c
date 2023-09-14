/*Implemente a função contCaractere, que dado uma string e um caractere, 
determina quantas vezes o caractere aparece na string. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

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

void inserirString(char *vetor, int quanti){
    printf("Digite o texto no vetor: ");
    fgets(vetor,quanti,stdin);
    limparBuffer();
}

void alocarMEM(char **vetor, int tamanho){
    *vetor = (char *) calloc(tamanho , sizeof(char));
}

char pedirCaracter(){
    char letra;
    do{
        printf("Digite o caracter que deseja pesquisar: ");
        scanf(" %c", &letra);
    } while (!isalnum(letra));
    return letra;
}

int contagem(char *string, char pesq) {
    int cont = 0;
    char *ponteiro1 = strchr(string, pesq);
    while (ponteiro1 != NULL) {
        printf("Encontrei na posição: %d\n", ponteiro1 - string);
        ponteiro1 = strchr(ponteiro1 + 1, pesq);
        cont++;
    }
    return cont;
}


int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    char *nome;
    char avalia;
    int quanti = pedirQtde();
    int res;
    alocarMEM(&nome,quanti);
    inserirString(nome,quanti);
    avalia = pedirCaracter();
    res = contagem(nome,quanti);
    printf("\n%s\n", RESULTADO);
    printf("A quantidade de '%c' apareçem: %d vezes nessa frase", avalia, res);
    printf("\n%s\n", CORTE);
    return 0;
}