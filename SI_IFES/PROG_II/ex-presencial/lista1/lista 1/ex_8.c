/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um 
programa em Linguagem C que leia o valor do salário mínimo e o valor do 
salário de uma pessoa. Calcular e imprimir quantos salários mínimos 
essa pessoa ganha*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirNum(char letra){
    float num;
    do{
        printf("Digite um valor para %c: ", letra);
        scanf("%f", &num);
    } while ((num <= 0) || (num > 100));
    return num;
}

void troca(float *a, float *b){
    float arm;
    arm = *a;
    *a = *b;
    *b = arm;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float a, b;
    a = pedirNum('A');
    b = pedirNum('B');
    troca(&a,&b);
    printf("\n%s\n", RESULTADO);
    printf("A partir de agora os valores de A e B sao, respectivamente: %.2f e %.2f ", a, b);
    printf("\n%s\n", CORTE);
    return 0;
}
