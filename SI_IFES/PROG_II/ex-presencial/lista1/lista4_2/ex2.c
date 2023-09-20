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

int calcularPerimetro(int x1, int x2, int y1, int y2, int x3, int y3){
    int lado1, lado2, lado3;
    lado1 = calculoDistancia(x1,y1,x2,y2);
    lado2 = calculoDistancia(x2,y2,x3,y3);
    lado3 = calculoDistancia(x1,y1,x3,y3);
    return lado1 + lado2 + lado3;
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int x1, x2, y1, y2, x3, y3, res;
    pedirPonto(&x1,&y1,1);
    pedirPonto(&x2,&y2,2);
    pedirPonto(&x3,&y3,3);
    res = calcularPerimetro(x1,x2,y1,y2,x3,y3);
    printf("\n%s\n", RESULTADO);
    printf("O perimetro desse triangulo (%d,%d),(%d,%d),(%d,%d) e: %d",x1,x2,y1,y2,x3,y3,res);
    printf("\n%s\n", CORTE);
    return 0;
}
