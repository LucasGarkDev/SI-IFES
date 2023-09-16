/*Escreva um programa que pergunte a quantidade de km percorridos por um 
carro alugado pelo usuário, assim como a quantidade de dias pelos quais 
o carro foi alugado. Calcule o preço a pagar, sabendo que o carro custa 
R$ 60,00 por dia e R$ 0,15 por km rodado.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirKm(){
    float num;
    do{
        printf("Digite a quantidade de km percorridos: ");
        scanf("%f", &num);
    } while ((num <= 0) || (num > 5000));
    return num;
}

int pedirDia(){
    int num;
    do{
        printf("Digite a quantidade de dias em que ficou com o carro: ");
        scanf("%d", &num);
    } while ((num <= 0) || (num > 365));
    return num;
}

float calculo(float km, int dia){
    return (0.15 * km) + (60 * dia);
}


int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float km, res;
    int dias;
    km = pedirKm();
    dias = pedirDia();
    res = calculo(km,dias);
    printf("\n%s\n", RESULTADO);
    printf("O valor a ser pago pelo aluguel desse carro e: %.2f", res);
    printf("\n%s\n", CORTE);
    return 0;
}