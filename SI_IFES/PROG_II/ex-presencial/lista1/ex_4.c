/*Em épocas de pouco dinheiro, os comerciantes estão 
procurando aumentar suas vendas oferecendo desconto. 
Faça um programa em C que possa entrar com o valor 
de um produto e imprima o novo valor tendo em vista 
que o desconto foi de 9%. Além disso, imprima o 
valor do desconto. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirValor();
float pedirDesconto();
float calcularDesconto(float valor, float desconto);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    float valor, desconto, res;
    valor = pedirValor();
    desconto = pedirDesconto();
    res = calcularDesconto(valor,desconto);
    printf("\n%s\n", resultado);
    printf("O resultado do desconto de %.2f e: %.2f\n", desconto, res);
    printf("\n%s\n", corte);
}

float pedirValor(){
    float num;
    printf("Digite o valor do produto: ");
    scanf("%f", &num);
    while (num <= 0.0){
        puts("Numero Invalido");
        printf("Digite o valor do produto, novamente: ");
        scanf("%f", &num);
    }
    return num;
}

float pedirDesconto(){
    float num, res;
    printf("Digite o valor do desconto em porcentagem: ");
    scanf("%f", &num);
    while (num < 0.0){
        puts("Numero Invalido");
        printf("Digite o valor do desconto em porcentagem, novamente: ");
        scanf("%f", &num);
    }
    res = num / 100;
    return res;
}

float calcularDesconto(float valor, float desconto){
    float calculo;
    calculo = valor - (valor * desconto);
    return calculo;
}