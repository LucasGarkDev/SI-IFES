#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h> // Para os números aleatórios
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define TAM 3

int aleatorio() {
    return (rand() % 100) + 1;
}

// int pedirNum(int contLinha, int contColuna){
//     int num;
//     do{
//         printf("Digite o %d numero da %d linha dessa matriz: ",contColuna,contLinha);
//         scanf("%d", &num);
//     } while ((num < 0)||(num > 10));
//     return num;
// }

void lerMatriz(int matriz[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            matriz[i][j] = aleatorio();
        }
    }
}

void multiplicacao(int matriz1[][TAM],int matriz2[][TAM],int multiNum){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            matriz1[i][j] *= multiNum;
            matriz2[i][j] *= multiNum;
        }
        printf("\n");
    }
}

void imprimirMatriz(int matriz[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    SetConsoleOutputCP(65001);
    // SEMENTE DOS NUMEROS ALEATÓRIOS. Usa a hora local
    srand((unsigned)time(NULL));
    int matriz1[TAM][TAM];
    int matriz2[TAM][TAM];
    int multiNum;
    printf("\n%s\n", INICIO);
    lerMatriz(matriz1);
    lerMatriz(matriz2);
    printf("Digite um valor valor para multiplicar as matrizes: ");
    scanf("%d", &multiNum);
    multiplicacao(matriz1,matriz2,multiNum);
    printf("\n%s\n", RESULTADO);
    // imprimirMatriz(matriz,1);
    // printf("\n%s\n", CORTE);
    // imprimirMatriz(matriz,0);
    return 0;
}
