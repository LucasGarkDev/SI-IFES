#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 4

float perguntarSalario();
float perguntarPercentual();
float calcularAumento(float salario, float percent);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    float salario, percentual;
    salario = perguntarSalario();
    percentual = perguntarPercentual();
    float res = calcularAumento(salario,percentual);
    printf("\n%s\n", resultado);
    printf("O aumento do salario foi de:\n");
    printf("%.2f para %.2f", salario, res);
}

float perguntarSalario() {
    float num;
    int result;
    do {
        printf("Digite o valor do seu salario atual: ");
        result = scanf("%f", &num);
        if (result != 1) {
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            scanf("%*[^\n]"); 
        } else {
            break; 
        }
    } while (1);
    return num;
}

float perguntarPercentual(){
    float percen; // Alterado para float
    float result;
    do {
        printf("Digite o valor do percentual de aumento, em porcentagem: ");
        result = scanf("%f", &percen);
        if (result != 1) {
            printf("Entrada inválida. Por favor, insira um percentual válido.\n");
            scanf("%*[^\n]"); 
        } else {
            break; 
        }
    } while (1);
    return percen; // Retorna o percentual como float
}

float calcularAumento(float salario, float percent){
    float conversao = percent/100;
    float novoSalario = salario + (salario * conversao);
    return novoSalario;
}