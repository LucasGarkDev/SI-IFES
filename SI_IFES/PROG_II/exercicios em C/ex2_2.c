/*Implemente um programa em C que leia um número e imprima a raiz quadrada deste
número caso ele seja positivo ou igual a zero; e o quadrado do número caso ele seja
negativo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirNumero();
float decisao(float numero);

int main() {
    printf("\n%s\n", inicio);
    float n1;
    float res;
    n1 = pedirNumero();
    res = decisao(n1);
    printf("\n%s\n", resultado);
    printf("O resultado: %.2f", res);
    printf("\n%s\n", corte);
    return 0;
}

float pedirNumero(){
    float num;
    printf("Digite um numero inteiro : ");
    scanf("%f", &num);
    return num;
}

float decisao(float numero){
    float resp;
    if (numero < 0){
        resp = numero * numero; 
    } else {
        resp = sqrt(numero);
    }
    return resp;
}
