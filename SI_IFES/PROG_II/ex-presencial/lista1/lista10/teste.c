/*Implemente a função recursiva para determinar o n-ésimo termo
da sequência de Fibonnacci, onde os dois primeiros termos são 1
e 1, e os demais são a soma dos dois termos anteriores
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int fibonaci(int n){
    if (n == 1){
        return 1;
    } else {
        return (n-1)+fibonaci(n);
    }
}

int main(){
    int e, n;
    printf("\n%s\n", INICIO);
    // printf("Base: ");
    // scanf("%d", &n);
    n = 6;
    e = fibonaci(n);
    printf("\n%s\n", RESULTADO);
    printf("O fibonaci de %d e: %d\n",n,e);
    printf("\n%s\n", CORTE);
    return 0;
}