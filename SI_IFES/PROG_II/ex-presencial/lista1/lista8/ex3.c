/*Acrescente à questão 2 uma estrutura para representar um Círculo. 
Um círculo é composto por um ponto que define o centro, ou seja, uma 
variável do tipo Ponto acima, e um raio (tipo float). Um círculo 
também possui uma cor, no mesmo esquema da cor do ponto. Crie as 
funções para ler e mostrar as informações. Crie uma função para 
calcular a área de um círculo, que é dada pela 
fórmula: area = pi * raio2. No programa principal, 
declare uma variável do tipo Circulo e chame as funções para ler, 
calcular a área e mostrar na tela os dados dessa reta. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define TAM 20

struct Ponto{
    float x;
    float y;
    char cor[TAM];
};
typedef struct Ponto Ponto;

struct Reta{
    Ponto xl;
    Ponto xll;
    char cor[TAM];
};
typedef struct Reta Reta;

float pedirPonto(int cont, int desci){
    float num;
    if (desci == 1){
        do{
            printf("Digite o valor do ponto X%d: ", cont);
            scanf("%f", &num);
        } while ((num < 0) || (num > 100));
        return num;
    }else{
        do{
            printf("Digite o valor do ponto Y%d: ", cont);
            scanf("%f", &num);
        } while ((num < 0) || (num > 100));
        return num;
    }
}

void pedirCor(char *cor, int cont, int desci){
    if (desci == 1){
        printf("Digite a cor do ponto %d: ", cont);
        scanf(" %19[^\n]s", cor);
    }else{
        printf("Digite a cor da reta %d: ", cont);
        scanf(" %19[^\n]s", cor);
    }
}

void pedirDadosPonto(Ponto *element, int cont){
    element->x = pedirPonto(cont,1);
    element->y = pedirPonto(cont,0);
    pedirCor(element->cor,cont,1);
}

void pedirDadosReta(Reta *element, int cont){
    pedirDadosPonto(&element->xl,cont);
    cont++;
    pedirDadosPonto(&element->xll,cont);
    pedirCor(element->cor,cont-1,0);
}

float calculoDistancia(float x1, float x2, float y1, float y2){
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2;
}

void imprimir(Reta ret, float distancia){
    int cont1 = 1, cont2 = 1;
    printf("\n%s\n", RESULTADO);
    printf("O ponto %d da reta: (%2.1f,%2.1f)\n", cont1,ret.xl.x,ret.xl.y);
    printf("A cor do ponto %d: %s\n", cont1, ret.xl.cor);
    cont1++;
    printf("O ponto %d da reta: (%2.1f,%2.1f)\n", cont1,ret.xll.x,ret.xll.y);
    printf("A cor do ponto %d: %s\n", cont1, ret.xll.cor);
    printf("O comprimento da reta e: %3.2f \n", distancia);
    printf("A cor da reta %d: %s\n", cont2, ret.cor);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    Reta funcao;
    int cont = 1;
    float res;
    pedirDadosReta(&funcao,cont);
    res = calculoDistancia(funcao.xl.x,funcao.xll.x,funcao.xl.y,funcao.xll.y);
    imprimir(funcao,res);
    return 0;
}