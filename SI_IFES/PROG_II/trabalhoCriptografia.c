/*Trabalho de criptografia*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 21

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de caracteres do texto: ");
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

int main() {
    char *str;
    int res;
    
    int quanti = pedirQtde();
    str = (char *) malloc(quanti * sizeof(char)); 
    limparBuffer();
    
    printf("Informe os caracteres: ");
    fgets(str, quanti, stdin);
    limparBuffer();
    
    res = strlen(str);
    printf("Quantidade de letras e: %d", res);
    free(str);
    
    return 0;
}