#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

FILE *abrirArquivo(char *nomeArq, char *modo) {
    FILE *arq;
    arq = fopen(nomeArq, modo);
    if (arq == NULL) {
        printf("Esse arquivo nao consta no diretorio.");
        exit(-1);
    }
    return arq;
}

int main() {
    SetConsoleOutputCP(65001);
    FILE *arquivo;
    char palavra[20];
    int cont = 0;
    char guarda[100]; // Aumentamos o tamanho para acomodar linhas inteiras
    char texto[10000];
    int compara;
    char *token;

    arquivo = abrirArquivo("../arquivos/redacao.txt", "w");
    printf("Digite o texto que voce deseja: ");
    fgets(texto, 100, stdin);
    fprintf(arquivo, "%s", texto);
    fclose(arquivo);

    arquivo = abrirArquivo("../arquivos/redacao.txt", "r");

    printf("Digite a palavra que voce quer pesquisar: ");
    fgets(palavra, 20, stdin);

    while (fgets(guarda, sizeof(guarda), arquivo) != NULL) {
        token = strtok(guarda, " "); 
        while (token != NULL) {
            compara = strcmp(token, palavra);
            if (compara == 0) {
                cont++;
            }
            token = strtok(NULL, " "); 
        }
    }

    printf("Foi contabilizado: %d vezes que a palavra %s aparece no texto\n", cont, palavra);
    fclose(arquivo);
    printf("O processo foi executado com sucesso");

    return 0;
}

