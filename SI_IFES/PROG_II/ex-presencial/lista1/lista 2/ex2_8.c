#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNumero();
int definicaoFinal(int n);

int main(){
    printf("\n%s\n", inicio);
    int numero, res;
    numero = pedirNumero();
    res = definicaoFinal(numero);
    printf("\n%s\n", resultado);
    printf("O resultado final e: %d", res);
    printf("\n%s\n", corte);
    return 0;
}

int pedirNumero(){
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Valor invalida");
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);
    }
    return num;
}

int definicaoFinal(int n){
    int resp;
    if (n <= 1){
        resp = 1;
    }else if (n <= 2){
        resp = 2;
    }else if ( n <= 3){
        resp = pow(n,2);
    }else{
        resp = pow(n,3);
    }
    return resp;
}