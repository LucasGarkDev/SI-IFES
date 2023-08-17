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

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirCodigo();
int pedirQuantidade();
float definirPrecoInicial(int codigo);
float calcularDesconto(float preco, int descontoPercent);
float calcularPrecoFinal(float precoInicial, int quantidade, int descontoPercent);

int main() {
    printf("\n%s\n", inicio);
    int codigo, quantidade;
    float precoInicial, precoFinal;
    codigo = pedirCodigo();
    quantidade = pedirQuantidade();
    precoInicial = definirPrecoInicial(codigo);
    precoFinal = calcularPrecoFinal(precoInicial, quantidade, 0);
    printf("\n%s\n", resultado);
    printf("O valor unitário do produto: %.2f\n", precoInicial);
    printf("O valor final da nota: %.2f\n", precoFinal);
    if (precoFinal <= 250) {
        printf("O desconto foi de: 5%%\n");
    } else if (precoFinal <= 500) {
        printf("O desconto foi de: 10%%\n");
    } else {
        printf("O desconto foi de: 15%%\n");
    }
    printf("\n%s\n", corte);
    return 0;
}

int pedirCodigo() {
    int cod;
    printf("Digite o código do produto (1 a 40): ");
    scanf("%d", &cod);
    while (cod < 1 || cod > 40) {
        puts("Código inválido");
        printf("Digite novamente: ");
        scanf("%d", &cod);
    }
    return cod;
}

int pedirQuantidade() {
    int qtde;
    printf("Digite a quantidade comprada: ");
    scanf("%d", &qtde);
    while (qtde <= 0) {
        puts("Quantidade inválida");
        printf("Digite novamente: ");
        scanf("%d", &qtde);
    }
    return qtde;
}

float definirPrecoInicial(int codigo) {
    float preco;
    if (codigo >= 1 && codigo <= 10) {
        preco = 10.00;
    } else if (codigo <= 20) {
        preco = 15.00;
    } else if (codigo <= 30) {
        preco = 20.00;
    } else if (codigo <= 40) {
        preco = 30.00;
    } else {
        puts("Produto sem preço");
        return 0;
    }
    return preco;
}

float calcularDesconto(float preco, int descontoPercent) {
    float descontoValor = preco * (descontoPercent / 100.0);
    return descontoValor;
}

float calcularPrecoFinal(float precoInicial, int quantidade, int descontoPercent) {
    float precoTotal = precoInicial * quantidade;
    if (descontoPercent > 0) {
        float descontoValor = calcularDesconto(precoTotal, descontoPercent);
        precoTotal -= descontoValor;
    }
    return precoTotal;
}
