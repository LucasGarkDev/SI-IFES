/*Implemente  manualmente  a função  strlen, ou seja, 
uma função que conta a quantidade de caracteres de uma 
string (obviamente não é permitido o uso da função strlen 
da biblioteca <string.h>*/

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

int contagem(char *string, int quanti){
    char vetor[quanti];
    int i, cont = 0;
    for (i = 0; i < quanti; i++){
        vetor[i] = toupper(string[i]);
        if (vetor[i] != '\n' && vetor[i] != '\0'){
            cont++;
        }
    }
    return cont;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    char *nome;
    int quanti = pedirQtde();
    alocarMEM(&nome,quanti);
    inserirString(nome,quanti);
    int res = contagem(nome,quanti);
    printf("\n%s\n", RESULTADO);
    printf("A quantidade de letras presente nesse texto e: %d", res);
    printf("\n%s\n", CORTE);
    return 0;
}