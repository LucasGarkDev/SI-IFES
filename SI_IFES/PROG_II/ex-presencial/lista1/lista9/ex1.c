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

// void gravarArquivo(FILE * arquivo, char * string) {
//     //fwrite( &qtde, sizeof(int), 1, arquivo  );
//     fprintf(arquivo,string);
// }

// void pedirPalavras(FILE *arquivo, char *texto, int *quanti){
//     printf("Digite o texto: ");
//     scanf(" %99[^\n]s", texto);
//     arquivo = abrirArquivo("../arquivos/palavrasConjunto.txt","w");
//     gravarArquivo(arquivo,texto);
//     *quanti = strlen(texto);
// }

int pesquisar(char vet[][50],char elemento[],int tamanho){
    int i;
    for(i=0; i < tamanho; i++){
        if(strcmp(vet[i], elemento) == 0){
            return i;
        }
    }
    
    return -1;
}

// void transcreve(char palavrasProibi[][50], FILE *arq2, int quanti, FILE *arq1){
//     char texto[MAX];
//     arq2 = abrirArquivo("../arquivos/palavrasConjuntoMod.txt","w");
//     substitui(arq1,palavrasProibi,quanti,texto);
//     gravarArquivo(arq2,texto);
// }

int main(){
    char palavrasProibidas[11][50] = {"sexo", "erótico", "golpe",
    "ladrão", "rapariga", "rebelião", "darth", "vader", "skywalker",
    "jedi", "flamengo"};
    char palavra[50]; 
    int a,b,i;
    FILE *arquivo= abrirArquivo("../arquivos/palavrasConjunto.txt","r");
    FILE *censurado=abrirArquivo("../arquivos/palavrasConjunto.txt","w");
    while(!feof(arquivo)){
        fscanf(arquivo,"%s",palavra);
        if((a=pesquisar(palavrasProibidas,palavra,11)) != -1){
            for(i=0; i < strlen(palavra);i++){
                palavra[i]= '*';
                
            }
            
            fprintf(censurado,"%s",palavra);
        }
        else{
            fprintf(censurado,"%s ",palavra);
        }
        
    }
    fclose(arquivo);
    fclose(censurado);
    return 0;
}