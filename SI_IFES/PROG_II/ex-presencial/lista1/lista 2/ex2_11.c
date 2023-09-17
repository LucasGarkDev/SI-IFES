/* Criar um programa em C que leia um número inteiro entre 
1 e 12 e escrever o mês correspondente. Caso o usuário 
digite um número fora desse intervalo, deverá aparecer 
uma mensagem informando que não existe mês com este 
número. */

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
    printf("Digite o numero do mes do ano (1 a 12): ");
    scanf("%d", &num);
    return num;
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int numero;
    numero = pedirNum();
    switch (numero) {
    case 1:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Janeiro");
        printf("\n%s\n", CORTE);
        break;
    case 2:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Fevereiro");
        printf("\n%s\n", CORTE);
        break;
    case 3:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Março");
        printf("\n%s\n", CORTE);
        break;
    case 4:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Abril");
        printf("\n%s\n", CORTE);
        break;
    case 5:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Maio");
        printf("\n%s\n", CORTE);
        break;
    case 6:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Junho");
        printf("\n%s\n", CORTE);
        break;
    case 7:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Julho");
        printf("\n%s\n", CORTE);
        break;
    case 8:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Agosto");
        printf("\n%s\n", CORTE);
        break;
    case 9:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Setembro");
        printf("\n%s\n", CORTE);
        break;
    case 10:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Outubro");
        printf("\n%s\n", CORTE);
        break;
    case 11:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Novembro");
        printf("\n%s\n", CORTE);
        break;
    case 12:
        printf("\n%s\n", RESULTADO);
        printf("O mês de hoje e: Dezembro");
        printf("\n%s\n", CORTE);
        break;
    default:
        printf("\n%s\n", RESULTADO);
        printf("Não existe mês com este número.\n");
        printf("\n%s\n", CORTE);
        break;
    }
    return 0;
}