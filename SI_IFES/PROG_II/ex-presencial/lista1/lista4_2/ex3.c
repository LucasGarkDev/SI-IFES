/*Faça uma função que dado dois valores (X, Y) retorne X * Y, entretanto não é
permitido usar o operador de produto. ( * ).
Sugestão: Use o operador de soma com um comando de repetição.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNum(){
    int num;
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

void lerDados(int *num1, int *num2){
    *num1 = pedirNum();
    *num2 = pedirNum();
}

int multiplicacao(int n1, int n2){
    int res, cont;
    cont = 0;
    while(cont < n2){
        res += n1;
        cont++;
    }
    return res;
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", inicio);
    int n1, n2, res;
    lerDados(&n1, &n2);
    res = multiplicacao(n1, n2);
    printf("\n%s\n", resultado);
    printf("O resultado da multiplicacao de %d e %d e: %d", n1, n2, res);
    printf("\n%s\n", corte);
    return 0;
}
