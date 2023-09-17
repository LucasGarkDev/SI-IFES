/*Criar um programa em C que leia o um número inteiro 
entre 1 e 7 e escreva o dia da semana correspondente. 
Caso o usuário digite um número fora desse intervalo, 
deverá aparecer uma mensagem informando que não existe
dia da semana com esse número. */

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
    printf("Digite o numero do dia da semana (1 a 7):");
    scanf("%d", &num);
    return num;
}
int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int numDiaSemana;
    numDiaSemana = pedirNum();
    switch (numDiaSemana){
    case 1:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Domingo");
        printf("\n%s\n", CORTE);
        break;
    
    case 2:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Segunda");
        printf("\n%s\n", CORTE);
        break;
    
    case 3:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Terça");
        printf("\n%s\n", CORTE);
        break;
    
    case 4:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Quarta");
        printf("\n%s\n", CORTE);
        break;
    
    case 5:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Quinta");
        printf("\n%s\n", CORTE);
        break;
    
    case 6:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Sexta");
        printf("\n%s\n", CORTE);
        break;
    
    case 7:
        printf("\n%s\n", RESULTADO);
        printf("Hoje o dia e: Sabado");
        printf("\n%s\n", CORTE);
        break;
    
    default:
        printf("\n%s\n", RESULTADO);
        printf("Não existe esse dia da semana");
        printf("\n%s\n", CORTE);
        break;
    }
    return 0;
}