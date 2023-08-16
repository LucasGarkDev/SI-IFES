/*Construir um programa em C que leia dois números e efetue a adição. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8. Caso o
valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNumero();
int decisao(int num1, int num2);

int main() {
    printf("\n%s\n", inicio);
    int n1, n2, res;
    n1 = pedirNumero();
    n2 = pedirNumero();
    res = decisao(n1,n2);
    printf("\n%s\n", inicio);
    printf("O valor sera: %d", res);
    printf("\n%s\n", corte);
    return 0;
}

int pedirNumero(){
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Numero Invalido");
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    return num;
}

int decisao(int num1, int num2){
    int resp;
    resp = num1 + num2; 
    if(resp > 20){
        resp += 8;
    }else{
        resp -= 5;
    }
    return resp;
}
