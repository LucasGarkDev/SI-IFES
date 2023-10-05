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
#define MAX 100

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
}Reta;

typedef struct Circulo{
    Ponto centro;
    float raio;
    char corCirculo[20];
}Circulo;

struct Poligono{
    Ponto vetor[100];    
};
typedef struct Poligono Poligono;

float pedirXY(char letra, int indicador){
    float num;
    do{
        printf("Digite o valor do ponto %c%d:",letra, indicador);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de espaços no vetor: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

// void lerCorP(Ponto *cor2){
//     printf("Digite a cor do ponto: ");
//     scanf(" %19[^\n]s", cor2);
// }

// void lerCorR(Reta *cor2){
//     printf("Digite a cor da reta: ");
//     scanf(" %19[^\n]s", cor2);
// }

// void lerCorC(Circulo *cor2){
//     printf("Digite a cor do circulo: ");
//     scanf(" %19[^\n]s", cor2);
// }

void lerPonto(Ponto *vetor, int indicador){
    vetor->x = pedirXY('X',indicador+1);
    vetor->y = pedirXY('Y',indicador+1);
    // lerCorP(p->cor);
}

// void lerReta(Reta *ret){
//     lerPonto((&ret->pt1),1);
//     lerPonto((&ret->pt2),2);
//     lerCorR(&(ret->corReta));
// }

// void lerCirculo(Circulo *circ){
//     printf("Digite o ponto em que o centro desse círculo está: \n");
//     lerPonto(&(circ->centro), 1);
//     printf("Digite o valor do raio desse círculo: ");
//     scanf("%f", &(circ->raio)); 
//     lerCorC(&(circ->corCirculo));
// }

void lerPoligono(Poligono *vet, int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        lerPonto(vet->vetor,i);
    }
}

// float calculoDist(Reta ret){
//     return ((ret.pt2.x-ret.pt1.x)*(ret.pt2.x-ret.pt1.x)+(ret.pt2.y-ret.pt1.y)*(ret.pt2.y-ret.pt1.y))/2;
// }

// void calcularDistanciaReta(Reta ret, float *res){
//     *res = calculoDist(ret);
// }

// void calCirculo(Circulo circ, float *res){
//     *res = M_PI * (circ.raio * circ.raio);
// }

void imprimir(Circulo circ, float area){
    printf("\n%s\n", RESULTADO);
    printf("O centro desse circulo é: (%.2f/%.2f)\n",circ.centro.x,circ.centro.y);
    printf("A area desse circulo é: %.2f\n", area);
    printf("E a cor que esse circulo esta desenhado é: %s",circ.corCirculo);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Poligono vet[MAX];
    int quanti = pedirQtde();
    printf("\n%s\n", INICIO);
    lerPoligono(vet,quanti);
    int i;
    for (i = 0; i < quanti; i++){
        printf("%.2f\n", vet->vetor[i]);
    }
    
    return 0;
}
