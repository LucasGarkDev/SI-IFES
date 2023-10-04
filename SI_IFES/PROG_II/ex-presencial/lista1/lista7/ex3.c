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
#define TAM1 5
#define TAM2 3

char aleatorio() {
    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int tamanho = strlen(caracteres);
    int indice = rand() % tamanho;
    return caracteres[indice];
}

void lerMatriz(char matriz[][TAM2]){
    int i, j;
    for (i = 0; i < TAM2; i++){
        for (j = 0; j < TAM1; j++){
            matriz[i][j] = aleatorio();
        }
    }
}

void imprimirMatriz(char matriz[][TAM2]){
    int i, j;
    for (i = 0; i < TAM1; i++){
        for (j = 0; j < TAM2; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    SetConsoleOutputCP(65001);
    srand((unsigned)time(NULL));
    char matriz1[TAM1][TAM2];
    lerMatriz(matriz1);
    printf("\n%s\n", RESULTADO);
    imprimirMatriz(matriz1);
    printf("\n%s\n", CORTE);
    return 0;
}