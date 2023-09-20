/*Escreva uma função que calcule a distância entre dois pontos, sabendo que a
distância entre dois pontos é dada pela expressão:
DISTANCIA = ( ( X2 – X1 )2 + ( Y2 – Y1 )2)1/2
O primeiro ponto é (X1, Y1) e o segundo ponto é dado por (X2, Y2).
Observação 1: Crie apenas uma função para a leitura dos pontos (X,Y), com passagem de
parâmetros por referência. Chame essa função duas vezes, uma para cada ponto.
Observação 2: Para essa questão poderão ser utilizadas as funções pow e/ou sqrt da
biblioteca <math.h> da linguagem C.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

void pedirPonto(int *x, int *y, int num){
    do{
        printf("Digite o valor do X%d:",num);
        scanf("%d", x);
    } while (*x <= 0);
    do{
        printf("Digite o valor do Y%d:",num);
        scanf("%d", y);
    } while (*y <= 0);
}

int calculoDistancia(int x1, int x2, int y1, int y2){
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2;
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int x1, x2, y1, y2, res;
    pedirPonto(&x1,&y1,1);
    pedirPonto(&x2,&y2,2);
    res = calculoDistancia(x1,x2,y1,y2);
    printf("\n%s\n", RESULTADO);
    printf("O resultado entre a distancia do ponto(%d,%d) para (%d,%d)...\n",x1,y1,x2,y2);
    printf("... e: %d", res);
    printf("\n%s\n", CORTE);
    return 0;
}
