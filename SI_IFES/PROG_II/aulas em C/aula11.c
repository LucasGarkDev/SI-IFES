#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main(){
    printf("\n%s\n", inicio);
    
    int valor = 0.0;
    int acrescimo = 0.0;
    
    printf("Digite o valor inicial:");
    scanf("%d", &valor);
    for(int cont = 0;cont < 10;cont ++){
        acrescimo = 2 * valor;
        valor += acrescimo;
        printf("%d\n", valor);
    }
    printf("\n%s\n", resultado);
    printf("O valor final sera: %d", valor);
}