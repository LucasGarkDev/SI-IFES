/*Implemente um algoritmo de calculadora que faça as operações de:
 Adição
 Subtração
 Divisão
 Multiplicação (usando a função da questão 3)
 Potência (usando a função da questão 4)
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int menu(){
    int num;
    do{
        printf("\n%s\n", INICIO);
        printf("1-ADIÇÃO\n");
        printf("2-SUBRAÇÃO\n");
        printf("3-DIVISÃO\n");
        printf("4-MULTIPLICAÇÃO\n");
        printf("5-POTÊNCIA\n");
        printf("0-SAIR\n");
        printf("Escolha entre uma das opçoes:");
        scanf("%d", &num);
    } while ((num != 1)&&(num != 2)&&(num != 3)&&(num != 4)&&(num != 5)&&(num != 0));
    return num;
}

void pedirValor(int *num,char letra){
    do{
        printf("Digite um valor para %c: ",letra);
        scanf("%d", num);
    } while (*num < 0);
}

int produto(int x, int y){
    int i;
    int res = 0;
    for (i = 0; i < y; i++){
        res += x;
    }
    return res;
}

int potencia(int x, int y){
    int i;
    int res = produto(x,x);
    for (i = 1; i < y - 1; i++){
        res = produto(res,x);
    }
    return res;
}

int main() {
    SetConsoleOutputCP(65001);
    int x, y, res;
    float final;
    int opcao = menu();
    switch (opcao){
    case 1:
        pedirValor(&x,'X');
        pedirValor(&y,'Y');
        res = x + y;
        printf("\n%s\n", RESULTADO);
        printf("O resultado da adição é: %d", res);
        printf("\n%s\n", CORTE);
        break;
    
    case 2:
        pedirValor(&x,'X');
        pedirValor(&y,'Y');
        res = x - y;
        printf("\n%s\n", RESULTADO);
        printf("O resultado da subtração é: %d", res);
        printf("\n%s\n", CORTE);
        break;
    
    case 3:
        pedirValor(&x,'X');
        pedirValor(&y,'Y');
        final = x / y;
        printf("\n%s\n", RESULTADO);
        printf("O resultado da divisão é: %.2f", final);
        printf("\n%s\n", CORTE);
        break;
    
    case 4:
        pedirValor(&x,'X');
        pedirValor(&y,'Y');
        res = produto(x,y);
        printf("\n%s\n", RESULTADO);
        printf("O resultado da multiplicação é: %d", res);
        printf("\n%s\n", CORTE);
        break;

    case 5:
        pedirValor(&x,'X');
        pedirValor(&y,'Y');
        res = potencia(x,y);
        printf("\n%s\n", RESULTADO);
        printf("O resultado da potência é: %d", res);
        printf("\n%s\n", CORTE);
        break;
        
    default:
        break;
    }
    return 0;
}