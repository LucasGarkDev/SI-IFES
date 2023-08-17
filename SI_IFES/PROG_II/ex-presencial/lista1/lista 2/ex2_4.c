/*Implemente um programa em C que leia um número e informe se ele é divisível por 10, 
por 5 ou por 2 ou se não é divisível por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNumero();
void resulta(int numero);

int main() {
    printf("\n%s\n", inicio);
    int num;
    num = pedirNumero();
    resulta(num);
    printf("\n%s\n", corte);
    return 0;
}

int pedirNumero(){
    int num;
    printf("Digite um numero inteiro : ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Numero invalido");
        printf("Digite um numero inteiro : ");
        scanf("%d", &num);
    }
    return num;
}

void resulta(int numero){
    if (numero % 10 == 0){
        printf("\n%s\n", resultado);
        printf("O %d e divisivel por 10", numero);
    }else if (numero % 5 == 0){
        printf("\n%s\n", resultado);
        printf("O %d e divisivel por 5", numero);
    }else if (numero % 2 == 0){
        printf("\n%s\n", resultado);
        printf("O %d e divisivel por 2", numero);
    }else{
        printf("\n%s\n", resultado);
        printf("O %d nao imprime por nenhum dos disponiveis", numero);
    } 
}


