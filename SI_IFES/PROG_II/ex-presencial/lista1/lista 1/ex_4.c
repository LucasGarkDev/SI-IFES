/*Em épocas de pouco dinheiro, os comerciantes estão 
procurando aumentar suas vendas oferecendo desconto. 
Faça um programa em C que possa entrar com o valor 
de um produto e imprima o novo valor tendo em vista 
que o desconto foi de 9%. Além disso, imprima o 
valor do desconto. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"


float pedirNum(){
    float num;
    printf("Digite o preço do produto: ");
    scanf("%f", &num);
    return num;
}

float calDesconto(float produto, float porcentagem){
    return produto * porcentagem;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float produto, desconto, res;
    produto = pedirNum();
    desconto = calDesconto(produto,0.09);
    res = produto - desconto;
    printf("\n%s\n", RESULTADO);
    printf("O valor do produto com um desconto de 9%% sera de : %.2f", res);
    printf("\n%s\n", CORTE);
    return 0;
}