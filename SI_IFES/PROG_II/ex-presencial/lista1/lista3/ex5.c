/*. Faça um programa que calcule o fatorial de um número inteiro 
fornecido pelo usuário. Atenção: só existe fatorial de números 
maiores que zero (coloque validação para isso).
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirNum(){
    int num;
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

int imprimirFat(int numero){
    int i;
    int soma = numero;
    printf("\n%s\n", RESULTADO);
    printf("%d", numero);
    for (i = numero - 1; i >= 1; i--){
        printf("x%d", i);
        soma *= i; 
    }
    return soma;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int numero, res;
    numero = pedirNum();
    res = imprimirFat(numero);
    printf(" = %d",res);
    printf("\n%s\n", CORTE);
    return 0;
}