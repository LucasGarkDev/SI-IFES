/*Construir um programa em C para calcular as raízes de uma 
equação do 2º grau, sendo que os valores dos coeficientes 
A, B, e C devem ser fornecidos pelo usuário através do 
teclado. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirCoeficientes(int numCoe);
int calculoEquacao(int a, int b, int c, int esco);

int main(){
    printf("\n%s\n", inicio);
    int a, b, c, res1, res2;
    a = pedirCoeficientes(1);
    b = pedirCoeficientes(2);
    c = pedirCoeficientes(3);
    res1 = calculoEquacao(a,b,c,0);
    res2 = calculoEquacao(a,b,c,1);
    printf("\n%s\n", resultado);
    printf("As razes dessa equacao e: %d e %d", res1, res2);
    printf("\n%s\n", corte);
    return 0;
}

int pedirCoeficientes(int numCoe){
    int num;
    printf("Digite do %d coeficiente: ", numCoe);
    scanf("%d", &num);
    while (num < 0 || num > 10){
        puts("Nota invalida");
        printf("Digite do %d coeficiente, novamente: ", numCoe);
        scanf("%d", &num);
    }
    return num;
}

int calculoEquacao(int a, int b, int c, int esco){
    int res1, res2, part1;
    part1 = sqrt((pow(b, 2) - 4 * a * c));
    res1 = (-b + part1) / (2 * a); // Correção aqui
    res2 = (-b - part1) / (2 * a); // Correção aqui
    if (esco == 0){
        return res1;
    } else {
        return res2;
    }
}
