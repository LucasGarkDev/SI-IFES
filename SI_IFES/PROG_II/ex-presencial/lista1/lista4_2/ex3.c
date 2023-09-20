/*Faça uma função que dado dois valores (X, Y) retorne X * Y, entretanto não é
permitido usar o operador de produto. ( * ).
Sugestão: Use o operador de soma com um comando de repetição.*/

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

void produto(int x, int y, int *res){
    int i;
    *res = 0;
    for (i = 0; i < y; i++){
        *res += x;
    }
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int x, y, res;
    pedirValor(&x,'X');
    pedirValor(&y,'Y');
    produto(x,y,&res);
    printf("\n%s\n", RESULTADO);
    printf("O produto de %d e %d é: %d", x,y,res);
    printf("\n%s\n", CORTE);
    return 0;
}
