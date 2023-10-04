#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define TAM 3

int pedirNum(int contLinha, int contColuna){
    int num;
    do{
        printf("Digite o %d numero da %d linha dessa matriz: ",contColuna,contLinha);
        scanf("%d", &num);
    } while ((num < 0)||(num > 10));
    return num;
}

void lerMatriz(int matriz[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            matriz[i][j] = pedirNum(i+1,j+1);
        }
    }
}

void imprimirMatriz(int matriz[][TAM], int desci){
    int i, j, multiNum;
    if (desci == 1){
        for (i = 0; i < TAM; i++){
            for (j = 0; j < TAM; j++){
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Digite um valor valor para multiplicar a diagonal: ");
        scanf("%d", &multiNum);
        for (i = 0; i < TAM; i++){
            for (j = 0; j < TAM; j++){
                if (i == j){
                    matriz[i][j] *= multiNum;
                }
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int matriz[TAM][TAM];
    printf("\n%s\n", INICIO);
    lerMatriz(matriz);
    printf("\n%s\n", RESULTADO);
    imprimirMatriz(matriz,1);
    printf("\n%s\n", CORTE);
    imprimirMatriz(matriz,0);
    return 0;
}
