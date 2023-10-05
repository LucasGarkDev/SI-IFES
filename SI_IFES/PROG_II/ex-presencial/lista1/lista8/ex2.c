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


float pedirXY(char letra, int indicador){
    float num;
    do{
        printf("Digite o valor do ponto %c%d:",letra, indicador);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

void lerCor(Reta *cor1,Ponto *cor2, int desci){
    if (desci == 1){
        printf("Digite a cor da reta: ");
        scanf(" %19[^\n]s", cor1);
    }else{
        printf("Digite a cor do ponto: ");
        scanf(" %19[^\n]s", cor2);
    }
}

void lerPonto(Reta *ret, Ponto *p, int indicador){
    p->x = pedirXY('X',indicador);
    p->y = pedirXY('Y',indicador);
    lerCor(&ret,p->cor,0);
}

void lerReta(Reta *ret){
    lerPonto(&ret,(&ret->pt1),1);
    lerPonto(&ret,(&ret->pt2),2);
    lerCor(&(ret->corReta),&(ret->corReta),1);
}

float calculoDist(Reta ret){
    return ((ret.pt2.x-ret.pt1.x)*(ret.pt2.x-ret.pt1.x)+(ret.pt2.y-ret.pt1.y)*(ret.pt2.y-ret.pt1.y))/2;
}

void calcularDistanciaReta(Reta ret, float *res){
    *res = calculoDist(ret);
}

void imprimir(Reta ret, float resultado){
    printf("\n%s\n", RESULTADO);
    printf("Os pontos dessa reta sao: (%.2f/%.2f),(%.2f/%.2f)\n",ret.pt1.x,ret.pt1.y,ret.pt2.x,ret.pt2.y);
    printf("O tamanho dessa reta é: %.2f\n", resultado);
    printf("E a cor que essa reta esta desenhada é: %s",ret.corReta);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Reta reta1;
    float res;
    printf("\n%s\n", INICIO);
    lerReta(&reta1);
    calcularDistanciaReta(reta1,&res);
    imprimir(reta1,res);
    return 0;
}
