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

struct Circulo{
    Ponto centro;
    Reta raio;
    char cor[TAM];
};
typedef struct Circulo Circulo;


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
    }else if (desci == 0){
        printf("Digite a cor da reta %d: ", cont);
        scanf(" %19[^\n]s", cor);
    }else{
        printf("Digite a cor do circulo %d: ", cont);
        scanf(" %19[^\n]s", cor);
    }
}

void pedirDadosPonto(Ponto *element, int cont){
    element->x = pedirPonto(cont,1);
    element->y = pedirPonto(cont,0);
    pedirCor(element->cor,cont,1);
}

void pedirDadosReta(Reta *element, int cont,int desci){
    if (desci == 0){
        pedirDadosPonto(&element->xll,cont);
    }else{
        pedirDadosPonto(&element->xl,cont);
        cont++;
        pedirDadosPonto(&element->xll,cont);
        pedirCor(element->cor,cont-1,0);
    }
}

float calculoDistancia(float x1, float x2, float y1, float y2){
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2;
}

void pedirDadosCirculo(Circulo *element, int cont){
    float num1, num2;
    do{
        printf("Digite o ponto X do centro do circulo: ");
        scanf("%f", &num1);
    } while ((num1 < 0)||(num1 > 100));
    do{
        printf("Digite o ponto Y do centro do circulo: ");
        scanf("%f", &num2);
    } while ((num2 < 0)||(num2 > 100));
    element->centro.x= num1;
    element->centro.y= num2;
    pedirDadosReta(&element->raio, cont, 0);
    pedirCor(element->cor,cont,2);
}

float calcularArea(Circulo circ){
    float raio = calculoDistancia(circ.centro.x,circ.raio.xll.x,circ.centro.y,circ.raio.xll.y);
    return M_PI * (raio * raio);
}

void imprimir(Circulo ciri, float area){
    printf("\n%s\n", RESULTADO);
    printf("O ponto onde se localiza o centro do circulo: (%2.1f,%2.1f)\n", ciri.centro.x,ciri.centro.y);
    printf("O valor da area do circulo e : %2.2f\n", area);
    printf("A cor do circulo e: %s", ciri.cor);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    Circulo circ;
    int cont = 1;
    float area;
    pedirDadosCirculo(&circ,cont);
    area = calcularArea(circ);
    imprimir(circ,area);
    return 0;
}