/*. Seja a seguinte série:
1, 4, 9, 16, 25, 36, ...
Implemente um programa que gere esta série até o N-ésimo (último) 
termo. Este N-ésimo termo é digitado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirTermo();
void imprimir(int ter);

int main() {
    printf("\n%s\n", inicio);
    int termo;
    termo = pedirTermo();
    printf("\n%s\n", resultado);
    imprimir(termo);
    printf("\n%s\n", corte);
    return 0;
}

int pedirTermo(){
    int num;
    do{
        printf("Digite o numero final: ");
        scanf("%d", &num);
    } while (num <= 1);
    return num;
}

void imprimir(int ter){
    int i, res;
    res = 0;
    for(i = 0; i < ter; i++){
        res = pow(i,2);
        printf("%d\n", res);
    }
}
