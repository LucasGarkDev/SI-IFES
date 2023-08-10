#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

void menu();
int pedirOpcao();
float pedirNumero();
float soma();
float subtracao();
float multiplicacao();
float divisao();

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op = 0;
    while (op != 99){
        int op = 0;
        float res = 0;
        printf("\n%s\n", inicio);
        menu();
        op = pedirOpcao();
        switch (op) {
        case 1:
            res = soma();
            printf("\n%s\n", resultado);
            printf("O resultado da soma é: %.2f", res);        
            break;
            
        case 2:
            res = subtracao();
            printf("\n%s\n", resultado);
            printf("O resultado da subtração é: %.2f", res);
            break;

        case 3:
            res = multiplicacao();
            printf("\n%s\n", resultado);
            printf("O resultado da multiplicação é: %.2f", res);
            break;

        case 4:
            res = divisao();
            printf("\n%s\n", resultado);
            printf("O resultado da divisão é: %.2f", res);
            break;
                
        case 5:
            printf("\n%s\n", resultado);
            printf("Fim do programa.\n");
            op = 99;
            break;

        default:
            printf("\n%s\n", resultado);
            printf("Opção inválida.\n");
            break;
        };
        printf("\n%s\n", corte);
    };  
}

void menu(){
    printf("\n%s\n", corte);
    puts("1-SOMA");
    puts("2-SUBTRACÃO");
    puts("3-MULTIPLICACÃO");
    puts("4-DIVISÃO");
    puts("5-SAIR");
}

int pedirOpcao(){
    int num;
    printf("Digite uma das opçoes:");
    scanf("%d", &num);
    while (num > 5 || num < 1){
        puts("Numero invalido");
        printf("Digite uma das opçoes, novamente:");
        scanf("%d", &num);
    }
    return num;
}

float pedirNumero(){
    float guarda;
    printf("Digite um numero:\n");
    scanf("%f", &guarda);
    while (guarda <= 0){
        puts("Numero invalido!\n");
        printf("Digite um numero,novamente\n:");
        scanf("%f", &guarda);
    }
    return guarda;
}

float soma(){
    float n1, n2;
    n1 = pedirNumero();
    n2 = pedirNumero();
    float soma;
    soma = n1 + n2;
    return soma;
}

float subtracao(){
    float n1, n2;
    n1 = pedirNumero();
    n2 = pedirNumero();
    float subtracao;
    subtracao = n1 - n2;
    return subtracao;
}

float multiplicacao(){
    float n1, n2;
    n1 = pedirNumero();
    n2 = pedirNumero();
    float multiplicacao;
    multiplicacao = n1 * n2;
    return multiplicacao;
}

float divisao(){
    float n1, n2;
    n1 = pedirNumero();
    n2 = pedirNumero();
    float divisao;
    divisao = n1 / n2;
    return divisao;
}