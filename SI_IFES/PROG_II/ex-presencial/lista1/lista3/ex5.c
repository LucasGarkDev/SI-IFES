/*. Faça um programa que calcule o fatorial de um número inteiro 
fornecido pelo usuário. Atenção: só existe fatorial de números 
maiores que zero (coloque validação para isso).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNumero();
int calcularFatorial(int num);

int main() {
    printf("\n%s\n", inicio);
    int numero, res;
    numero = pedirNumero();
    res = calcularFatorial(numero);
    printf("\n%s\n", resultado);
    printf("O fatorial de %d e: %d", numero, res);
    printf("\n%s\n", corte);
    return 0;
}

int pedirNumero(){
    int num;
    do{
        printf("Digite um numero que deseja: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

int calcularFatorial(int num){
    int i;
    int fat = 1;
    for(i = num; i > 1; i--){
        fat = fat * i;
    }
    return fat;
}
