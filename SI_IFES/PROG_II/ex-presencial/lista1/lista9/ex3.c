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
#define MAX 12

FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("ERRO ao abrir o arquivo.");
        exit(-1);
    }
    return arq;
}

// int aleatorio1() {
//     return (rand() % 8) + 1;
// }

// int aleatorio2() {
//     return (rand() % 1000) + 1;
// }

// void gravarArquivo(FILE *arquivo, int quanti) {
//     int i, aleNum, num;
//     char meses[3][10] = {"LEDS", "LETER", "Robotica"};
//     for (i = 0; i < quanti; i++) {
//         aleNum = aleatorio1();
//         num = aleatorio2();
//         switch (aleNum){
//         case 1:
//             fprintf(arquivo, "%d %s %s %s\n", num, "***","***","***");
//             break;
        
//         case 2:
//             fprintf(arquivo, "%d %s %s %s\n", num, meses[1],"***","***");
//             break;
        
//         case 3:
//             fprintf(arquivo, "%d %s %s %s\n", num, meses[1],"***",meses[3]);
//             break;
        
//         case 4:
//             fprintf(arquivo, "%d %s %s %s\n", num, meses[1],meses[2],"***");
//             break;
        
//         case 5:
//             fprintf(arquivo, "%d %s %s %s\n", num, meses[1],meses[2],meses[3]);
//             break;
        
//         case 6:
//             fprintf(arquivo, "%d %s %s %s\n", num, "***",meses[2],"***");
//             break;
        
//         case 7:
//             fprintf(arquivo, "%d %s %s %s\n", num, "***",meses[2],meses[3]);
//             break;
        
//         case 8:
//             fprintf(arquivo, "%d %s %s %s\n", num, "***","***",meses[3]);
//             break;
        
//         default:
//             break;
//         }
//     }
// }

// void pedirPalavras(FILE *arquivo, int quanti){
//     gravarArquivo(arquivo,quanti);
// }

void designarMatriculas(FILE *arquivo, int *leds, int *leter, int *robotica, int *q1, int *q2, int *q3){
    int matricula, i = 0, j = 0, k = 0;
    char guarda[8];
    while (!(feof(arquivo))){
        fscanf(arquivo,"%d ",&matricula);
        fscanf(arquivo, "%10[^\n]s",guarda);
        if (strcmp(guarda,"Robotica  ") == 0){
            robotica[i] = matricula;
            i++;
            (*q3)++;
        }else if (strcmp(guarda,"LETER     ") == 0){
            leter[j] = matricula;
            j++;
            (*q2)++;
        }else if (strcmp(guarda,"LEDS      ") == 0){
            leds[k] = matricula;
            k++;
            (*q1)++;
        }
    }
}

void imprimir(int *vetor, int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        printf("Matricula %d: %d\n",i,vetor[i]);
    }
    printf("%s\n", CORTE);
}

int main(){
    srand((unsigned)time(NULL));
    FILE *arq1;
    int leds[MAX];
    int leter[MAX];
    int robotica[MAX];
    int quanti1 = 0, quanti2 = 0, quanti3 = 0;
    arq1 = abrirArquivo("../arquivos/alunosExtensoes.txt","r");
    // pedirPalavras(arq1,quanti);
    designarMatriculas(arq1,leds,leter,robotica,&quanti1,&quanti2,&quanti3);
    printf("Vetor Leds:\n");
    imprimir(leds,quanti1);
    printf("Vetor Leter:\n");
    imprimir(leter,quanti2);
    printf("Vetor Robotica:\n");
    imprimir(robotica,quanti3);
    fclose(arq1);
    
    return 0;
}