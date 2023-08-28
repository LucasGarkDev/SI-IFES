/*Criar um programa que leia a quantidade de números a serem lidos. 
Depois, leia os números inteiros até essa quantidade e imprima o 
menor deles. Suponha que todos os números lidos
serão positivos, então coloque a validação desses números.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirQtdeNum();
int lerNumero(int cont);
int comparaMenor(int num,int menorAtual);

int main() {
    printf("\n%s\n", inicio);
    int quanti, i, numero, menor;
    quanti = pedirQtdeNum();
    menor = 99;
    for (i = 1; i <= quanti; i++){
        numero = lerNumero(i);
        menor = comparaMenor(numero,menor);
    }
    printf("\n%s\n", resultado);
    printf("O menor numero dentre os digitados e: %d", menor);
    printf("\n%s\n", corte);
    return 0;
}

int pedirQtdeNum(){
    int num;
    do{
        printf("Digite a quantidade de numeros a serem inseridos: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

int lerNumero(int cont){
    int num;
    do{
        printf("Digite o %d numero: ", cont);
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

int comparaMenor(int num,int menorAtual){
    if (num < menorAtual){
        menorAtual = num;
    }
    return menorAtual;
}
