#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define operacoes "----------OPERACOES----------"

int main(){
    printf("\n%s\n", inicio);

    int X, Y, soma, subtracao, multiplicacao, divisao;

    printf("Digite o valor de X:");
    scanf("%d", &X);
    printf("Digite o valor de Y:");
    scanf("%d", &Y);

    printf("\n%s\n", operacoes);
    int numDecide = 0;
    printf("1-soma\n");
    printf("2-subtracao\n");
    printf("3-multiplicacao\n");
    printf("4-divisao\n");
    printf("Digite o numero da operacao desejada:");
    scanf("%d", &numDecide);
    switch(numDecide){
        case 1:
            soma = X + Y;
            printf("\n%s\n", resultado);
            printf("O valor da soma e %d", soma);
            break;
        case 2:
            if(X>Y){
                subtracao = X - Y;
            }
            else{
                subtracao = Y - X;
            }
            printf("\n%s\n", resultado);
            printf("O valor da subtracao e %d", subtracao);
            break;
        case 3:
            multiplicacao = X * Y;
            printf("\n%s\n", resultado);
            printf("O valor da multiplicacao e %d", multiplicacao);
            break;
        case 4:
            if(X>Y){
                divisao = X / Y;
            }
            else{
                divisao = Y / X;
            }
            printf("\n%s\n", resultado);
            printf("O valor da divisao e %d", divisao);
            break;
        default:
            printf("\n%s\n", resultado);
            printf("Operacao nao existente para %d e %d", X, Y);
            break;
    }
}