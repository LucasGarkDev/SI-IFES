/*Dados três valores A, B e C, construa um programa em C que imprima os valores de 
forma descendente (do maior para o menor).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirNumero();
float decisao(float num1,float num2,float num3);

int main() {
    printf("\n%s\n", inicio);
    float num1, num2, num3;
    num1 = pedirNumero();
    num2 = pedirNumero();
    num3 = pedirNumero();
    float maior1, maior2, maior3;
    if ((num1 > num2) && (num1 > num3)){
        maior1 = num1;
        if (num2 > num3){
            maior2 = num2;
            maior3 = num3;
        }else{
            maior2 = num3;
            maior3 = num2; 
        }  
    }else if (num2 > num3){
        maior1 = num2;
        if (num1 > num3){
            maior2 = num1;
            maior3 = num3;
        }else{
            maior2 = num3;
            maior3 = num1; 
        }
    }else{
        maior1 = num3;
        if (num1 > num2){
            maior2 = num1;
            maior3 = num2;
        }else{
            maior2 = num2;
            maior3 = num1; 
        }
    }
    printf("\n%s\n", resultado);
    printf("O resultado: %.2f,%.2f,%.2f", maior1,maior2,maior3);
    printf("\n%s\n", corte);
    return 0;
}

float pedirNumero(){
    float num;
    printf("Digite um numero inteiro : ");
    scanf("%f", &num);
    while (num <= 0){
        puts("Numero invalido");
        printf("Digite um numero inteiro : ");
        scanf("%f", &num);
    }
    return num;
}
