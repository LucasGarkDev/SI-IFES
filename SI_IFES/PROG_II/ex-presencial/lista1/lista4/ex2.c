/*Faça um programa com funções em C que leia o preço de um produto qualquer (maior que
zero) e a forma de pagamento (à vista ou à prazo, pode ser char ou int) e calcule o preço final
desse produto da seguinte forma:
 O preço do produto à vista tem desconto de 10%.
 O preço do produto à prazo tem acréscimo de 10%.
Depois, leia a quantidade (maior que zero) desse produto que será comprada e informe o valor
total da compra. 
*/

#include <stdio.h>
#include <stdlib.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirPreco(){
    float num;
    do{
        printf("Digite o preco do produto: ");
        scanf("%f", &num);
    } while (num < 0);
    return num;
}

char pedirFormPagamento(){
    char forma;
    do{
        printf("Digite a forma de pagamento desejada(V- a vista/P- a prazo): ");
        scanf(" %c", &forma);
    } while ((forma != 'V') && (forma != 'P'));
    return forma;
}

float calDescontoAcrescimo(float num, int deci){
    float res;
    if (deci == 1){
        res = num - ((num * 10)/100);
    }else{
        res = num + ((num * 10)/100);
    }
    return res;
}

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade que deseja comprar: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

float calcularPreco(float preco, char formaPagamento){
    float precoUnitario, precoFinal, valor;
    int qtde;
    if (formaPagamento == 'V'){
        valor = calDescontoAcrescimo(preco,1);
        precoUnitario = preco - valor;
    }else{
        valor = calDescontoAcrescimo(preco,0);
        precoUnitario = preco + valor;
    }
    qtde = pedirQtde();
    precoFinal = precoUnitario * qtde;
    return precoFinal;
}

int main(){
    printf("\n%s\n", inicio);
    float preco, calculo;
    char formaDePagamento;
    preco = pedirPreco();
    formaDePagamento = pedirFormPagamento();
    calculo = calcularPreco(preco,formaDePagamento);
    printf("\n%s\n", resultado);
    printf("O valor a ser pago sera: %.2f", calculo);
    printf("\n%s\n", corte);
    return 0;
}
