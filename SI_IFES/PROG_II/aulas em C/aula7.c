#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main(){
    printf("\n%+s\n", inicio);

    int X, Y, calculo;

    printf("Digite o valor de X:");
    scanf("%d", &X);
    printf("Digite o valor de Y:");
    scanf("%d", &Y);

    calculo = X * Y;

    printf("\n%s\n", resultado);
    if(X > 0 && Y > 0){
        if(calculo >= 4 && calculo <= 7){
            printf("O valor entra dentro a faixa\n");
        } 
        else{
            printf("O valor esta fora da faixa\n");
        }

    }
    

}