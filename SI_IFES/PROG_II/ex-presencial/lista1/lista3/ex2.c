/*Implemente um programa que imprima todos os números múltiplos de 5, 
no intervalo fechado de 1 a 500*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int verificaMultiplo(int num);
void imprmir();

int main() {
    printf("\n%s\n", resultado);
    imprmir();
    return 0;
}

void imprmir(){
    int i;
    for (i = 5; i <= 500; i+=5){
        printf("%d\n", i);
        printf("\n%s\n", corte);
    }
}
