/*Ler uma data no formato: “dd/mm/aaaa” e imprimir a data no 
formato americano “aaaa-mmdd”. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirQtde() {
    int num;
    do {
        printf("Digite a quantidade de espaços no vetor: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void limparBuffer() {
    int ch;
    do {
        ch = getchar();
    } while (ch != EOF && ch != '\n');
}

void remover(char *vetor, int *qtde, int pos) {
    int i;
    for (i = pos; i < *qtde - 1; i++) {
        vetor[i] = vetor[i + 1];
    }
    (*qtde)--;
}

int main() {
    SetConsoleOutputCP(65001);
    char *str;

    int quanti = pedirQtde();
    str = (char *)malloc(quanti * sizeof(char));
    limparBuffer();

    printf("Informe a data (dd/mm/aaaa): ");
    fgets(str, quanti, stdin);
    limparBuffer();

    char dia[3], mes[3], ano[5], vetorRes[9] = {0};
    sscanf(str, "%2s/%2s/%4s", dia, mes, ano);
    strcat(vetorRes, ano);
    strcat(vetorRes, "-");
    strcat(vetorRes, mes);
    strcat(vetorRes, dia);
    
    printf("\n%s\n", RESULTADO);
    printf("O valor da data é: %s", vetorRes);
    printf("\n%s\n", CORTE);

    free(str);

    return 0;
}
