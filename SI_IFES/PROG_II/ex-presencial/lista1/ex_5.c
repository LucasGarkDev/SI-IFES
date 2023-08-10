/*Desenvolva um programa em C que leia uma temperatura em graus centígrados 
e apresente a temperatura convertida em graus Fahrenheit. A fórmula de 
conversão é:
F = (9 x C + 160) / 5
Onde F é a temperatura em Fahrenheit e C é a temperatura em centígrados*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirTemperatura();
int calculoConversao(int c);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int temperatura, res;
    temperatura = pedirTemperatura();
    res = calculoConversao(temperatura);
    printf("\n%s\n", resultado);
    printf("A temperatura %d em graus celcius equivale a %d em fahrenheit", temperatura, res);
    printf("\n%s\n", corte);
    return 0;
}

int pedirTemperatura(){
    int num;
    printf("Digite o grau da temperatura em Celcius: ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Temperatura Invalida");
        printf("Digite o grau da temperatura em Celcius, novamente: ");
        scanf("%d", &num);
    }
    return num;
}

int calculoConversao(int c){
    int f;
    f = (9 * c + 160) / 5;
    return f;
}
