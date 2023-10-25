/* Uma certa fábrica produziu dois tipos de motores M1 e M2. Em um arquivo texto foi registrado
a quantidade de motores produzidos em cada mês. Cada linha do arquivo corresponde a um
mês, simulando a tabela abaixo (o arquivo só contém os números, em duas colunas).

O setor de controle de vendas tem outro arquivo com o custo e o lucro (em unidades monetárias)
obtidos com cada motor. Um motor por linha, por exemplo:

Fazer um programa que, a partir da produção mensal dos motores M1 e M2 e seus respectivos
custos e lucros, calcule o custo total e o lucro total (somando os dois motores) em cada um dos
meses e no ano. Por exemplo:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

struct Motores{
    int custo;
    int lucro;
};
typedef struct Motores Motores;


FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("ERRO ao abrir o arquivo.");
        exit(-1);
    }
    return arq;
}

int pedirDados(int cont, char *mes){
    int num;
    do{
        printf("Digite a quantidade de motores M%d no mes de %s: ", cont, mes);
        scanf("%d", &num);
    } while ((num < 0)||(num > 100));
    return num;
}

void gravarArquivo(FILE *arquivo, Motores *vetor, int quanti) {
    int i;
    char meses[12][14] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    for (i = 0; i < quanti; i++) {
        vetor[i].custo = pedirDados(1, meses[i]);
        vetor[i].lucro = pedirDados(2, meses[i]);
        fprintf(arquivo, "%d %d\n", vetor[i].custo, vetor[i].lucro);
    }
}

void pedirPalavras(FILE *arquivo, Motores *vetor, int quanti){
    arquivo = abrirArquivo("../arquivos/motoresProduzidos2.txt","w");
    gravarArquivo(arquivo,vetor, quanti);
}



int main(){
    FILE *arq1;
    FILE *arq2;
    int quanti = 12;
    // Motores vet[12];
    // Motores vet2[12];
    // pedirPalavras(arq2,vet2,quanti);
    // fclose(arq1);
    // fclose(arq2);
    
    return 0;
}