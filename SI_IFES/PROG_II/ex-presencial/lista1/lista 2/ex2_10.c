/*Criar um programa em C que leia o um número inteiro 
entre 1 e 7 e escreva o dia da semana correspondente. 
Caso o usuário digite um número fora desse intervalo, 
deverá aparecer uma mensagem informando que não existe
dia da semana com esse número. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNumero();
void mostrarDia(int num);

int main(){
    printf("\n%s\n", inicio);
    int numero = pedirNumero();
    printf("\n%s\n", resultado);
    mostrarDia(numero);
    printf("\n%s\n", corte);
    return 0;
}

int pedirNumero(){
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    while (num < 0){
        puts("Numero Invalido");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    return num;
}

void mostrarDia(int num){
    switch (num){
    case 1:
        puts("Hoje o dia e: domingo");
        break;
    
    case 2:
        puts("Hoje o dia e: segunda");
        break;
    
    case 3:
        puts("Hoje o dia e: terça");
        break;
    
    case 4:
        puts("Hoje o dia e: quarta");
        break;
    
    case 5:
        puts("Hoje o dia e: quinta");
        break;
    
    case 6:
        puts("Hoje o dia e: sexta");
        break;
    
    case 7:
        puts("Hoje o dia e: sabado");
        break;
    
    default:
        puts("nao existe esse dia da semana");
        break;
    }
}