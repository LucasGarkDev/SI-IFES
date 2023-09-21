/*Faça uma função que dado dois valores (X, Y) retorne X^Y, entretanto não é
permitido usar a função pow da linguagem C.
Observação 1: Use a função multiplicação da questão anterior com um comando de repetição.
Observação 2: Essa questão deverá ser implementada considerando Y como do tipo int. Se Y
for float, a implementação de potência é mais complexa, pois precisaríamos trabalhar com
potência de números fracionários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

void pedirValor(int *num,char letra){
    do{
        printf("Digite um valor para %c: ",letra);
        scanf("%d", num);
    } while (*num < 0);
}

int produto(int x, int y){
    int i;
    int res = 0;
    for (i = 0; i < y; i++){
        res += x;
    }
    return res;
}

int potencia(int x, int y){
    int i;
    int res = produto(x,x);
    for (i = 1; i < y - 1; i++){
        res = produto(res,x);
    }
    return res;
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int x, y, res;
    pedirValor(&x,'X');
    pedirValor(&y,'Y');
    res = potencia(x,y);
    printf("\n%s\n", RESULTADO);
    printf("A potencia de %d e %d sera: %d",x,y,res);
    printf("\n%s\n", CORTE);
    return 0;
}