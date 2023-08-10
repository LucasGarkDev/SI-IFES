#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"


int main(){
    printf("\n%s\n", inicio);
    int cont = 0;
    
    float valor = 0.0;
    float acrescimo = 0.0;
    
    printf("Digite o valor inicial:");
    scanf("%f", &valor);
    do{
        printf("Digite o valor para acrescentar(digite 0 para parar):");
        scanf("%f", &acrescimo);
        valor += acrescimo;
        cont ++;
    }while(acrescimo > 0 || acrescimo < 0);
    printf("\n%s\n", resultado);
    printf("O valor final sera: %.2f", valor);
}