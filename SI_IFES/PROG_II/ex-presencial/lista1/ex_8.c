/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um 
programa em Linguagem C que leia o valor do salário mínimo e o valor do 
salário de uma pessoa. Calcular e imprimir quantos salários mínimos 
essa pessoa ganha*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirSalario();
float valorSalarioMin();
float qtdeSalarios(float salario, float salariosMinimos);

int main() {
    printf("\n%s\n", inicio);
    float salario, valor, res;
    salario = pedirSalario();
    valor = valorSalarioMin();
    res = qtdeSalarios(salario, valor);
    printf("\n%s\n", resultado);
    printf("O salario dessa pessoa equivale a %.2f salarios minimos", res);
    printf("\n%s\n", corte);
    return 0;
}

float pedirSalario(){
    float num;
    printf("Digite o valor so seu salario: ");
    scanf("%f", &num);
    while (num <= 0) {
        puts("Salario Invalido");
        printf("Digite o valor so seu salario, novamente: ");
        scanf("%f", &num);
    }
    return num;
}

float valorSalarioMin(){
    float num;
    printf("Digite o valor do salario minimo atualmente: ");
    scanf("%f", &num);
    while (num <= 0) {
        puts("Salario Invalido");
        printf("Digite o valor do salario minimo, novamente: ");
        scanf("%f", &num);
    }
    return num;
}

float qtdeSalarios(float salario, float salariosMinimos){
    float resu;
    resu = salario / salariosMinimos;
    return resu;
}
