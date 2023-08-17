/*Implemente um programa que imprima todos os números inteiros de 
100 a 1 (em ordem decrescente)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

void imprimirNumeros();

int main() {
    printf("\n%s\n", resultado);
    imprimirNumeros();
    return 0;
}

void imprimirNumeros(){
    int i;
    for (i = 100; i > 0; i--){
        printf("%d\n", i);
    }
}
