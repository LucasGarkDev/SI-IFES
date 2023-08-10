#include <stdio.h>

int main(){

    int idade = 0;
    printf("Digite o valor da idade: \n");
    scanf("%d", &idade);
    printf("A idade informada foi: %d\n", idade);

    float peso = 0.0;
    printf("Digite o valor do peso: ");
    scanf("%f", &peso);
    printf("O peso informado e: %.2f\n", peso);

    int dia = 0;
    int mes = 0;
    int ano = 0;
    printf("Digite o valor do dia, mes e ano,\n dando espaco entre eles:\n ");
    scanf(" %d", &dia);
    scanf(" %d", &mes);
    scanf(" %d", &ano);
    printf("A data e %d / %d / %d",&dia, &mes, &ano);

    return 0;
}


