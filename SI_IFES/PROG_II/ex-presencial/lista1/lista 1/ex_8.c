/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um 
programa em Linguagem C que leia o valor do salário mínimo e o valor do 
salário de uma pessoa. Calcular e imprimir quantos salários mínimos 
essa pessoa ganha*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirValor(int desci){
    float num;
    if (desci == 1){
        do{
            printf("Digite um valor do salario minimo: ");
            scanf("%f", &num);
        } while ((num <= 0) || (num > 5000));
        return num;
    }else{
        do{
            printf("Digite um valor do salario do funcionario: ");
            scanf("%f", &num);
        } while ((num <= 0) || (num > 100000));
        return num;
    }
}

int contagemSalarios(float valor, float salarioMin){
    int res;
    res = valor / salarioMin;
    return res;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float salarioMin, valor;
    int res;
    salarioMin = pedirValor(1);
    valor = pedirValor(0);
    res = contagemSalarios(valor,salarioMin);
    printf("\n%s\n", RESULTADO);
    printf("A quantidade de salarios mininos que esse funcionario ganha e: %d", res);
    printf("\n%s\n", CORTE);
    return 0;
}
