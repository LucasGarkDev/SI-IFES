/*Construir um programa em C para calcular as raízes de uma 
equação do 2º grau, sendo que os valores dos coeficientes 
A, B, e C devem ser fornecidos pelo usuário através do 
teclado. */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirNum(char coeficiente){
    int num;
    do {
        printf("Digite o valor do coeficiente %c: ", coeficiente);
        scanf("%d", &num);
    } while (num == 0 || num > 10000 || num < -10000);
    return num;
}

float operacaoSegGrau(int a, int b, int c, int desci){
    // a*pow(x,2) + b*x + c
    int delta, x;
    delta = (b * b) - 4 * a * c;
    if (delta < 0) {
        printf("Delta é negativo. Não há raízes reais.\n");
        return 0; 
    }
    if (desci == 1){
        x = (- b - sqrt(delta))/(2.0 * a);
        return x;
    }else{
        x = (- b + sqrt(delta))/(2.0 * a);
        return x;
    }
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int a, b, c;
    float x1, x2;
    a = pedirNum('A');
    b = pedirNum('B');
    c = pedirNum('C');
    x1 = operacaoSegGrau(a,b,c,1);
    x2 = operacaoSegGrau(a,b,c,0);
    printf("\n%s\n", RESULTADO);
    printf("Dentro da equaçao: %dx^2 + %dx + %d \n", a, b, c);
    printf("O resultado das raizes foram: %.2f e %.2f", x1, x2);
    printf("\n%s\n", CORTE);
    return 0;
}
