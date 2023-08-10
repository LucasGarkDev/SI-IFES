/*Criar um programa em Linguagem C que leia dois valores para as variáveis A 
e B, que efetue a troca dos valores de forma que a variável A passe a ter 
o valor da variável B e que a variável B passe a ter o valor da variável 
A. Apresente os valores trocados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirValor(char let);
void imprimir(int a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int valorA, valorB, valorC;
    valorA = pedirValor('A');
    valorB = pedirValor('B');
    valorC = valorA;
    valorA = valorB;
    valorB = valorC;
    imprimir(valorA, valorB);
    return 0;
}

int pedirValor(char let) {
    int num;
    printf("Digite um valor para %c: ", let);
    scanf("%d", &num);
    while (num <= 0) {
        puts("Numero Invalido");
        printf("Digite um valor para %c, novamente: ", let);
        scanf("%d", &num);
    }
    return num;
}

void imprimir(int a, int b) {
    printf("\n%s\n", resultado);
    printf("O valor de A é: %d\n", a);
    printf("O valor de B é: %d\n", b);
    printf("\n%s\n", corte);
}
