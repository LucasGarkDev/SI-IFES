/*Ler uma data no formato: “dd/mm/aaaa” e imprimir a data no 
formato americano “aaaa-mmdd”. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

void limparBuffer() {
    int ch;
    do {
        ch = getchar();
    } while (ch != EOF && ch != '\n');
}

void inserirString(char *vetor) {
    printf("Digite a data no formato (dd/mm/aaaa): ");
    fgets(vetor, sizeof(vetor) - 1, stdin);
    limparBuffer();
}

int main() {
    char data[11];
    printf("\n%s\n", INICIO);
    inserirString(data);
    int dia, mes, ano;
    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) == 3) {
        if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1000) {
            char dataAmericana[11];
            snprintf(dataAmericana, sizeof(dataAmericana), "%04d-%02d%02d", ano, mes, dia);
            printf("\n%s\n", RESULTADO);
            printf("Data no formato americano: %s\n", dataAmericana);
            printf("\n%s\n", CORTE);
        } else {
            printf("\n%s\n", RESULTADO);
            printf("Data inválida.\n");
            printf("\n%s\n", CORTE);
        }
    } else {
        printf("\n%s\n", RESULTADO);
        printf("Formato de data inválido. Use dd/mm/aaaa.\n");
        printf("\n%s\n", CORTE);
    }
    return 0;
}