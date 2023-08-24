/*Sabendo-se que um triângulo é formado por três pontos:
A = ( X1, Y1 ) B = ( X2, Y2 ) C = ( X3, Y3 )
E que o perímetro de um triângulo é a soma das distâncias dos lados do triângulo. Podendo ser
escrito da seguinte forma:
Perímetro = DISTANCIA(A,B) + DISTANCIA(A,C) + DISTANCIA(B,C)
Faça uma função que calcule o perímetro de um triângulo.
Observação 1: Use a função distância e a função da leitura dos pontos da questão anterior.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

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
    printf("\n%s\n", inicio);
    int x1, x2, y1, y2, x3, y3, ab, bc, ca, res;
    lerPonto(&x1,&y1,1);
    lerPonto(&x2,&y2,2);
    lerPonto(&x3,&y3,3);
    ab = distancia(&x1, &y1, &x2, &y2);
    bc = distancia(&x2, &y2, &x3, &y3);
    ca = distancia(&x3, &y3, &x1, &y1);
    res = ab + bc + ca;
    printf("\n%s\n", resultado);
    printf("O perimetro desse triangulo e: %d", res);
    printf("\n%s\n", corte);
    return 0;
}
