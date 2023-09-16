/*Desenvolva um programa em C que leia uma temperatura em graus centígrados 
e apresente a temperatura convertida em graus Fahrenheit. A fórmula de 
conversão é:
F = (9 x C + 160) / 5
Onde F é a temperatura em Fahrenheit e C é a temperatura em centígrados*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirTemp(){
    float num;
    do{
        printf("Digite a temperatura em C: ");
        scanf("%f", &num);
    } while ((num <= 0) || (num > 100));
    return num;
}

float conversao(float C){
    return (9 * C + 160) / 5;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float tempC, tempF;
    tempC = pedirTemp();
    tempF = conversao(tempC);
    printf("\n%s\n", RESULTADO);
    printf("O valor em Fahrenheit de %.2f em Celsius e: %.2f",tempC,tempF);
    printf("\n%s\n", CORTE);
    return 0;
}