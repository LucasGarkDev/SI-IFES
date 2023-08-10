#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"


int main(){
    printf("\n%s\n", inicio);
    int cont = 0;
    int limite = 0;
    printf("Digite a quantidade de acrescimos:");
    scanf("%d", &limite);
    while(limite <= 0){
        printf("Valor impossivel");
        printf("Digite a quantidade de acrescimos,novamente:");
        scanf("%d", &limite);
    }
    float valor = 0.0;
    float acrescimo = 0.0;
    printf("Digite o valor inicial do acrescimo:");
    scanf("%f", &valor);
    while(cont < limite){
        acrescimo = (0.1 * valor);
        valor += acrescimo;
        cont ++;
    }
    printf("\n%s\n", resultado);
    printf("O valor final sera: %.2f", valor);
}