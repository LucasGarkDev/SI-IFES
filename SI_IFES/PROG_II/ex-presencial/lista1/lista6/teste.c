#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirNumNPC(){
    int num;
    do{
        printf("Digite a quantidade de npc's nesse combate: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}



void alocarMEM(char **vetor, int tamanho){
    int num;
    *vetor = (char *) malloc(tamanho * sizeof(char));
}

void imprimir(char *vetor, int tamanho){
    int i;
    printf("\n%s\n", RESULTADO);
    printf("O vetor completo: ");
    for (i = 0; i < tamanho; i++){
        printf("%s\n",vetor[i]);
    }
    printf("\n%s\n", CORTE);
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    char *barraIniciativa;
    int quanti = pedirNumNPC();
    alocarMEM(&barraIniciativa,quanti);
    imprimir(barraIniciativa,quanti);
    return 0;
}
