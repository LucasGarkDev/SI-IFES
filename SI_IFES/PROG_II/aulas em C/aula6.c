#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main(){
    printf("\n%s\n", inicio);

    int X, Y, calculo;

    printf("Digite o valor de X:");
    scanf("%d", &X);
    printf("Digite o valor de Y:");
    scanf("%d", &Y);

    calculo = X * Y;

    printf("\n%s\n", resultado);
    if(calculo >= 7){
        printf("O resultado %d e atinguiu que a media\n", calculo);
        if(calculo % 2 == 0){
        printf("O resultado %d e par!", calculo);
        }
        if(calculo % 2 == 1){
           printf("O resultado %d e impar!", calculo); 
        }
    }

}