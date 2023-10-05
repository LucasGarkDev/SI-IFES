/*Acrescente à questão 3 uma estrutura para representar um Polígono 
qualquer. Um polígono é composto por vários pontos, ou seja, um vetor 
de pontos. No programa principal, declare uma variável do tipo Polígono
e chame as funções para ler e mostrar na tela os dados desse polígono.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

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

typedef struct Circulo{
    Ponto centro;
    float raio;
    char corCirculo[20];
}Circulo;

float pedirXY(char letra, int indicador){
    float num;
    do{
        printf("Digite o valor do ponto %c%d:",letra, indicador);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

void lerCorP(Ponto *cor2){
    printf("Digite a cor do ponto: ");
    scanf(" %19[^\n]s", cor2);
}

void lerCorR(Reta *cor2){
    printf("Digite a cor da reta: ");
    scanf(" %19[^\n]s", cor2);
}

void lerCorC(Circulo *cor2){
    printf("Digite a cor do circulo: ");
    scanf(" %19[^\n]s", cor2);
}

void lerPonto(Ponto *p, int indicador){
    p->x = pedirXY('X',indicador);
    p->y = pedirXY('Y',indicador);
    lerCorP(p->cor);
}

void lerReta(Reta *ret){
    lerPonto((&ret->pt1),1);
    lerPonto((&ret->pt2),2);
    lerCorR(&(ret->corReta));
}

void lerCirculo(Circulo *circ){
    printf("Digite o ponto em que o centro desse círculo está: \n");
    lerPonto(&(circ->centro), 1);
    printf("Digite o valor do raio desse círculo: ");
    scanf("%f", &(circ->raio)); // Correção aqui
    lerCorC(&(circ->corCirculo));
}

float calculoDist(Reta ret){
    return ((ret.pt2.x-ret.pt1.x)*(ret.pt2.x-ret.pt1.x)+(ret.pt2.y-ret.pt1.y)*(ret.pt2.y-ret.pt1.y))/2;
}

void calcularDistanciaReta(Reta ret, float *res){
    *res = calculoDist(ret);
}

void calCirculo(Circulo circ, float *res){
    *res = M_PI * (circ.raio * circ.raio);
}

void imprimir(Circulo circ, float area){
    printf("\n%s\n", RESULTADO);
    printf("O centro desse circulo é: (%.2f/%.2f)\n",circ.centro.x,circ.centro.y);
    printf("A area desse circulo é: %.2f\n", area);
    printf("E a cor que esse circulo esta desenhado é: %s",circ.corCirculo);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Circulo circ1;
    float area;
    printf("\n%s\n", INICIO);
    lerCirculo(&circ1);
    calCirculo(circ1,&area);
    imprimir(circ1,area);
    return 0;
}
