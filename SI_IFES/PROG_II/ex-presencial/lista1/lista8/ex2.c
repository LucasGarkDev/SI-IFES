/*Acrescente à questão 1 uma estrutura para representar uma Reta. 
Uma reta é composta por dois pontos, ou seja, duas variáveis do tipo 
Ponto da questão 1. Uma Reta também possui uma cor, no mesmo esquema 
da cor do ponto. Crie uma função para ler os dados da reta, ou seja, 
chamar a função para ler ponto da questão 1, duas vezes, uma para cada
ponto da reta. Crie outra função para calcular o tamanho da reta, ou 
seja, a distância entre os dois pontos da reta (veja exercício 1 da 
lista 4). No programa principal, declare uma variável do tipo Reta e 
chame as funções para ler, calcular o tamanho e mostrar na tela os dados
dessa reta. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define TAM 3

struct Ponto{
    float x;
    float y;
    char cor[20];
};
typedef struct Ponto Ponto;

typedef struct Reta{
    Ponto pt1;
    Ponto pt2;
    char corReta[20];
}Reta ;


float pedirXY(char letra){
    float num;
    do{
        printf("Digite o valor do ponto %c:",letra);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

void lerCor(Ponto *cor){
    printf("Digite a cor: ");
    scanf(" %19[^\n]s", cor);
}

void lerPonto(Ponto *p, char letra){
    p->x = pedirXY('X');
    p->y = pedirXY('Y');
    lerCor(p->cor);
}

void lerReta(Reta *ret){
    lerPonto((&ret->pt1),'A');
    lerPonto((&ret->pt2),'B');
}

void imprimir(int cont, Ponto p){
    printf("\n%s\n", RESULTADO);
    printf("O valor do ponto %d e:\n", cont);
    printf("O ponto e: (%.2f,%.2f)\n", p.x, p.y);
    printf("A cor do ponto e: %s\n", p.cor);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Reta reta1;
    lerReta(&reta1);
    printf("\n%s\n", INICIO);
    
    return 0;

}
