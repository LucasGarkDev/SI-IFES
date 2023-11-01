#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int fatorial(int base){
    if (base == 0){
        return 1;
    } else {
        return base*fatorial(base-1);
    }
}

int main(){
    int n, e;
    printf("Base: ");
    scanf("%d", &n);
    e = fatorial(n);
    printf("\n%s\n", RESULTADO);
    printf("O fatorial de %d e: %d\n",n,e);
    return 0;
}