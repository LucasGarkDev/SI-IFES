/*Faça um programa que receba o código e a quantidade de 
um produto comprado. Calcule e mostre: 
 O preço unitário 
do produto comprado, conforme Tabela 1; 
 O valor total da nota; 
 O valor de desconto, conforme Tabela 2, e aplicado 
sobre o valor total;
 O valor total depois do desconto.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirNum(int desci){
    int num;
    if (desci == 1){
        do {
            printf("Digite o codigo do produto(1 a 40): ");
            scanf("%d", &num);
        } while (num < 0 || num > 40);
        return num;
    }else{
        do {
            printf("Digite a quantidade que voce deseja desse produto: ");
            scanf("%d", &num);
        } while (num <= 0 || num > 100);
        return num;
    }
}

float definePreco(int codigo) {
    float precoUni;
    if (codigo <= 10 ) {
        precoUni = 10.00;
    } else if (codigo <= 20) {
        precoUni = 15.00;
    } else if (codigo <= 30) {
        precoUni = 20.00;
    } else {
        precoUni = 30.00;
    }
    return precoUni;
}

float desconto(int soma){
    if (soma <= 250.00){
        return soma * 0.05;
    }else if (soma <= 500.00){
        return soma * 0.10;
    }else{
        return soma * 0.15;
    }
}

float calculaNota(int soma, float desconto){
    return soma - desconto;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int codigo, quanti;
    float descontoQuanti, nota, precoUni, soma;
    codigo = pedirNum(1);
    quanti = pedirNum(0);
    precoUni = definePreco(codigo);
    soma = precoUni * quanti;
    descontoQuanti = desconto(soma);
    nota = calculaNota(soma, descontoQuanti);
    printf("\n%s\n", RESULTADO);
    printf("O preço do produto unitario: %.2f\n", precoUni);
    printf("O valor total da nota: %.2f\n", soma);
    printf("O valor do descont: %.2f\n", descontoQuanti);
    printf("O valor da nota com o desconto: %.2f", nota);
    printf("\n%s\n", CORTE);
    return 0;
}
