#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main(){
    printf("\n%s\n", inicio);
    
    float valor, acrescimo, res;
    int ciclos = 0;
    
    printf("Digite o valor inicial: ");
    scanf("%f", &valor);
    
    for (int cont = 0; cont < 40; cont++) {
        acrescimo = 0.1 * valor;
        ciclos += 1;
        
        if (cont % 2 == 0) {
            valor += acrescimo;
        } else {
            valor *= acrescimo; 
        }
        
        if (valor >= 1000) {
            continue;
        }
        
        printf("%.2f\n", valor);
        
        if (valor <= 0) {
            break;
        }
        res = valor;
    }
    
    printf("\n%s\n", resultado);
    printf("O valor final será: %.2f\n", res);
    printf("Isso demorou: %d ciclos\n", ciclos);
}
