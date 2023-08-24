/*Faça uma função que dado dois valores (X, Y) retorne X^Y, entretanto não é
permitido usar a função pow da linguagem C.
Observação 1: Use a função multiplicação da questão anterior com um comando de repetição.
Observação 2: Essa questão deverá ser implementada considerando Y como do tipo int. Se Y
for float, a implementação de potência é mais complexa, pois precisaríamos trabalhar com
potência de números fracionários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirNum(){
    int num;
    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

void lerDados(int *num1, int *num2){
    *num1 = pedirNum();
    *num2 = pedirNum();
}

int multiplicacao(int n1, int n2){
    int res, cont;
    cont = 0;
    res = 0;
    while(cont < n2){
        res += n1;
        cont++;
    }
    return res;
}

int potencia(int n1, int n2){
    int res, cont, valor;
    cont = 0;
    res = 0;
    while(cont < n2){
        valor = multiplicacao(n1, n1);
        res += valor;
        cont++;
    }
    return res;
    
}
int main() {
    printf("\n%s\n", inicio);
    int n1, n2, res;
    lerDados(&n1, &n2);
    res = potencia(n1, n2);
    printf("\n%s\n", resultado);
    printf("O resultado da potencia de %d e %d e: %d", n1, n2, res);
    printf("\n%s\n", corte);
    return 0;
}
