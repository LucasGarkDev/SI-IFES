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

int distancia(int *x1, int *x2, int *y1, int *y2){
    int res1, res2, res3, res4, res5, res6;
    res1 = *x2 - *x1;
    res2 = *y2 - *y1;
    res3 = pow(res1,2);
    res4 = pow(res2,2);
    res5 = res3 + res4;
    res6 = sqrt(res5);
    return res6;
}

void lerPonto(int *x, int *y, int cont){
    printf("Digite o valor de X%d : ", cont);
    scanf("%d", x);
    printf("Digite o valor de Y%d : ", cont);
    scanf("%d", y);
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int x1, x2, y1, y2, res;
    lerPonto(&x1,&y1,1);
    lerPonto(&x2,&y2,2);
    res = distancia(&x1, &x2, &y1, &y2);
    printf("\n%s\n", RESULTADO);
    printf("O valor da distancia entre os pontos (%d,%d) e (%d,%d)...", x1, y1, x2, y2);
    printf("....sera %d", res);
    return 0;
}
