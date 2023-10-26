/*Faça um programa para ler esse arquivo e inserir o número de matrícula em um vetor que
corresponde a cada projeto. Portanto, teremos 3 vetores, uma para os alunos que estão no
LEDS, outro para o LETER e outro para a Robótica. No final, imprima os três vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h> // Para os números aleatórios

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("ERRO ao abrir o arquivo.");
        exit(-1);
    }
    return arq;
}

int aleatorio1() {
    return (rand() % 8) + 1;
}

int aleatorio2() {
    return (rand() % 1000) + 1;
}

void gravarArquivo(FILE *arquivo, int quanti) {
    int i, aleNum, num;
    char meses[3][10] = {"LEDS", "LETER", "Robotica"};
    for (i = 0; i < quanti; i++) {
        aleNum = aleatorio1();
        num = aleatorio2();
        switch (aleNum){
        case 1:
            fprintf(arquivo, "%d %s %s %s\n", num, "***","***","***");
            break;
        
        case 2:
            fprintf(arquivo, "%d %s %s %s\n", num, meses[1],"***","***");
            break;
        
        case 3:
            fprintf(arquivo, "%d %s %s %s\n", num, meses[1],"***",meses[3]);
            break;
        
        case 4:
            fprintf(arquivo, "%d %s %s %s\n", num, meses[1],meses[2],"***");
            break;
        
        case 5:
            fprintf(arquivo, "%d %s %s %s\n", num, meses[1],meses[2],meses[3]);
            break;
        
        case 6:
            fprintf(arquivo, "%d %s %s %s\n", num, "***",meses[2],"***");
            break;
        
        case 7:
            fprintf(arquivo, "%d %s %s %s\n", num, "***",meses[2],meses[3]);
            break;
        
        case 8:
            fprintf(arquivo, "%d %s %s %s\n", num, "***","***",meses[3]);
            break;
        
        default:
            break;
        }
    }
}

void pedirPalavras(FILE *arquivo, int quanti){
    gravarArquivo(arquivo,quanti);
}

int main(){
    srand((unsigned)time(NULL));
    FILE *arq1;
    int quanti = 12;
    arq1 = abrirArquivo("../arquivos/alunosExtensoes.txt","w");
    pedirPalavras(arq1,quanti);
    fclose(arq1);
    
    return 0;
}