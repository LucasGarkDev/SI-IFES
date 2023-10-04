/*Fazer um programa que tenha duas matrizes 100x100 de números inteiros. 
Faça uma função para preencher uma matriz com números aleatórios entre 1 e 
100. Chame essa função duas vezes, uma para cada matriz. Em seguida ler um 
inteiro m que servirá para multiplicar os elementos de cada uma das matrizes.
Após fazer a multiplicação, o programa deve somar os elementos de mesma 
posição de cada matriz e guardar em uma terceira matriz. No final, imprima 
todas as três matrizes. É necessário apenas uma função imprimir. Chama-la 
três vezes.  Seu programa precisará de cinco funções: preencher uma matriz 
com números aleatórios, ler o inteiro m, multiplicar uma matriz por m, somar
os elementos, imprimir uma matriz. */

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

void soma(int matriz1[][TAM],int matriz2[][TAM],int matriz3[][TAM]){
    int i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            matriz3[i][j]= matriz1[i][j] + matriz2[i][j];
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
    int matriz3[TAM][TAM];
    int multiNum;
    printf("\n%s\n", INICIO);
    lerMatriz(matriz1);
    lerMatriz(matriz2);
    printf("Digite um valor valor para multiplicar as matrizes: ");
    scanf("%d", &multiNum);
    multiplicacao(matriz1,matriz2,multiNum);
    soma(matriz1,matriz2,matriz3);
    printf("\n%s\n", RESULTADO);
    imprimirMatriz(matriz1);
    printf("\n%s\n", CORTE);
    imprimirMatriz(matriz2);
    printf("\n%s\n", CORTE);
    imprimirMatriz(matriz3);
    printf("\n%s\n", CORTE);
    return 0;
}
