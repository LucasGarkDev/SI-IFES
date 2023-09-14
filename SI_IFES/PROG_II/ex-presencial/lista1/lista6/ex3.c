/*Ler uma data no formato: “dd/mm/aaaa” e imprimir a data no 
formato americano “aaaa-mmdd”. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 11

void limparBuffer() {
    int ch;
    do {
        ch = getchar();
    } while (ch != EOF && ch != '\n');
}

void inserirString(char *vetor, int tamanho) {
    printf("Digite a data no formato (dd/mm/aaaa): ");
    fgets(vetor, tamanho, stdin);
    limparBuffer();
}

int main() {
    char data[12];
    int tamanho = 11, i;
    printf("\n%s\n", INICIO);
    printf("Digite a data no formato (dd/mm/aaaa): ");
    fgets(data, tamanho, stdin);
    limparBuffer();
    char dia[2];
    char mes[2];
    char ano[4];
    printf("%s", data);
    for (i = 0; i < 2; i++){
        dia[i] = data[i];
    }
    for (i = 2; i < 2; i++){
        mes[i] = data[i];
    }
    for (i = 4; i < 4; i++){
        ano[i] = data[i];
    }
    strcat(mes,dia);
    strcat(ano,"-");
    strcat(ano,mes);
    printf("%s", ano);
    return 0;
}turn 0;
}
