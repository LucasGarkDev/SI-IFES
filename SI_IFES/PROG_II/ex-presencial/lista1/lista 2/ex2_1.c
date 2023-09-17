/*Construir um programa em C que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8. Caso o
valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirNum(int cont){
    float num;
    do{
        printf("Digite o valor do %d numero: ", cont);
        scanf("%f", &num);
    } while ((num < 0)||(num > 10000));
    return num;
}

float operacao(float numero1, float numero2){
    float soma;
    soma = numero1 + numero2;
    if (soma > 20){
        return soma + 8;
    }else{
        return soma - 5;
    } 
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float valor1, valor2, res;
    valor1 = pedirNum(1);
    valor2 = pedirNum(2);
    res = operacao(valor1,valor2);
    printf("\n%s\n", RESULTADO);
    printf("Considerando a soma de %.2f e %.2f....\n", valor1, valor2);
    printf(".... o valor apos a operaçao sera: %.2f", res);
    printf("\n%s\n", CORTE);
    return 0;
}
