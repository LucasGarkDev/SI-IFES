/*. Implemente um programa que armazene em um vetor todos os números inteiros de 100 a 1
(em ordem decrescente). Após isso, o programa deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

int imprimir(int vetor[], int *quanti){
    int i;
    int num = 1;
    for (i = 0; i < 100; i++){
        printf(" %d\n", &vetor[i]);
        num++;
    }
}


int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int vetor[MAX];
    int quanti = 0;
    imprimir(vetor,&quanti);
    return 0;
}
