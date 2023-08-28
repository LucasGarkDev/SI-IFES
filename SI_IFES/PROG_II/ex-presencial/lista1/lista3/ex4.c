/*Criar um programa que leia os limites inferior e superior de um 
intervalo e imprima todos os números pares no intervalo aberto e 
seu somatório. Suponha que os dados digitados são para
um intervalo crescente, ou seja, o primeiro valor é menor que o 
segundo (coloque a validação para isso).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedir1Valor();
int pedir2Valor(int valor1);
int verificaPar(int num);
void imprimirSoma(int valor1, int valor2);

int main() {
    printf("\n%s\n", inicio);
    int num1, num2;
    num1 = pedir1Valor();
    num2 = pedir2Valor(num1);
    printf("\n%s\n", resultado);
    imprimirSoma(num1, num2);
    printf("\n%s\n", corte);
    return 0;
}

int pedir1Valor(){
    int num;
    do{
        printf("Digite o limite inferior: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

int pedir2Valor(int valor1){
    int num;
    do{
        printf("Digite o limite superior: ");
        scanf("%d", &num);
    } while (num <= valor1);
    return num;
}

void imprimirSoma(int valor1, int valor2){
    int i, soma, res;
    soma = 0;
    for ( i = valor1; i < valor2; i++){
        res = verificaPar(i);
        if (res == 1){
            printf("O numero %d e par\n", i);
            soma += i;
        } 
    }
    printf("A soma total dos intervalos e: %d\n", soma);
}

int verificaPar(int num){
    if (num % 2 == 0){
        return 1;
    }else{
        return 0;
    } 
}
