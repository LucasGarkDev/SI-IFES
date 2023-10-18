#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("Esse arquivo nao cosnta no diretorio.");
        exit(-1);
    }
    return arq;
}

void lerTexto(){
    char texto[10000];
    FILE * arq;
    printf("Digite o texto que voce deseja: ");
    fgets(texto,100,stdin);
    fprintf(arq,"%s",texto);
}

int main() {
    SetConsoleOutputCP(65001);
    FILE * arquivo;
    char palavra[20];
    int cont;
    char guarda[20];
    arquivo = abrirArquivo("../arquivos/redacao.txt", "w");
    lerTexto();
    printf("Digite a palavra que voce quer pesquisar: ");
    fgets(palavra,20,stdin);
    while (!feof(arquivo)){ 
        fscanf(arquivo," %50[^\n]s",guarda);
    }
    printf("Foi contabilizado no : %d vezes que a palavras: %s apareçe no texto",cont,palavra);
    fclose(arquivo);
    printf("O processo foi executado com sucesso");    
    return 0;
}
