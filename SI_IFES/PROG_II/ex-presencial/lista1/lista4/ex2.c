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
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirPreco(){
    float num;
    do{
        printf("Digite o preço do produto: ");
        scanf("%f", &num);
    } while(num <= 0);
    return num;
}

char pedirFormaPagamento(){
    char letra, inserir;
    do{
        printf("Digite o preço do produto: ");
        scanf("%c", &letra);
        inserir = toupper(letra);
    } while((inserir != 'V')&&(inserir != 'P'));
    return letra;
}

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade que deseja comprar: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

float calculo(float preco, char formaPagamento){
    float total;
    int quanti;
    if(formaPagamento == 'V'){
        total = preco - (preco * 0.10);
    }else{
        total = preco + (preco * 0.10);
    }
    quanti = pedirQtde();
    total = total * quanti;
    return total;
}

int main() {
    printf("\n%s\n", INICIO);
    float preco, res;
    char forma;
    preco = pedirPreco();
    forma = pedirFormaPagamento();
    res = calculo(preco,forma);
    printf("\n%s\n", RESULTADO);
    printf("O valor a ser pago pelo produto e: %.2f", res);
    printf("\n%s\n", CORTE);
    return 0;
}
