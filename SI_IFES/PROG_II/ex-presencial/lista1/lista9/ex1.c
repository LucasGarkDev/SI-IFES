/* Em uma galáxia muito distante, o ditador de um planeta resolveu censurar todas as
mensagens. Então você deve fazer um programa para ler palavra por palavra de um arquivo
texto e copiar para outro arquivo. Porém, se encontrar alguma das palavras proibidas abaixo,
substituí-las por “*” no outro arquivo. Por exemplo: se encontrar “sexo”, substituir por “****”. As
palavras proibidas estão em um vetor, então a cada palavra lida do arquivo, chamar a função
“pesquisar”, como visto em sala de aula, para pesquisar nesse vetor de palavras proibidas.
Não diferenciar maiúsculas de minúsculas.
char palavrasProibidas[100][50] = {"sexo", "erótico", "golpe",
"ladrão", "rapariga", "rebelião", "darth", "vader", "skywalker",
"jedi", "flamengo"};*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 50

FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("ERRO ao abrir o arquivo.");
        exit(-1);
    }
    return arq;
}

void gravarArquivo(FILE * arquivo, char * string) {
    //fwrite( &qtde, sizeof(int), 1, arquivo  );
    fprintf(arquivo,string);
}

void pedirPalavras(FILE *arquivo, char *texto, int *quanti){
    printf("Digite o texto: ");
    scanf(" %99[^\n]s", texto);
    arquivo = abrirArquivo("../arquivos/palavrasConjunto.txt","w");
    gravarArquivo(arquivo,texto);
    *quanti = strlen(texto);
}

void substitui(FILE * arquivo, char palavrasProibi[][50], int quanti){
    int j, i;
    arquivo = abrirArquivo("../arquivos/palavrasConjunto.txt","r");
    char *texto[MAX];
    for (i = 0; i < 100; i++){
        if (strcmp(palavrasProibi[i],texto) == 0){
            for (j = 0; j < quanti; j++){
                texto[j] = '*';
            }
        } 
    }
}

void transcreve(char *texto,char palavrasProibi[][50], FILE *arq2, int quanti){
    arq2 = abrirArquivo("../arquivos/palavrasConjuntoMod.txt","w");
    substitui(texto,palavrasProibi,quanti);
    gravarArquivo(arq2,texto);
}

int main(){
    FILE * arq1;
    FILE * arq2;
    char palavrasProibidas[100][50] = {"sexo","erótico","golpe","ladrão","rapariga","rebelião","darth","vader","skywalker","jedi","flamengo"};
    char texto[MAX];
    int quanti = 0;
    // pedirPalavras(arq1,texto,&quanti);
    transcreve(arq1,palavrasProibidas,arq2,quanti);
}