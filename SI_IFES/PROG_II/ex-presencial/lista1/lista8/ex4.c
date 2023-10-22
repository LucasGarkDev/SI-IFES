/*Acrescente à questão 3 uma estrutura para representar um Polígono 
qualquer. Um polígono é composto por vários pontos, ou seja, um vetor 
de pontos. No programa principal, declare uma variável do tipo Polígono
e chame as funções para ler e mostrar na tela os dados desse polígono.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

struct Poligono{
    Ponto poli[TAM];
};
typedef struct Poligono Poligono;


int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de lados do seu poligono: ");
        scanf("%d", &num);
    } while ((num < 0)||(num > 30));
    return num;
}

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

void pedirCor(char *cor, int cont){
    printf("Digite a cor do ponto %d: ", cont);
    scanf(" %19[^\n]s", cor);
}

void pedirDadosPonto(Ponto *element, int cont){
    element->x = pedirPonto(cont,1);
    element->y = pedirPonto(cont,0);
    pedirCor(element->cor,cont);
}

void pedirDadosPoligono(Poligono *polly, int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        pedirDadosPonto(&polly->poli[i],i+1);
    }
    
}

float calculoDistancia(float x1, float x2, float y1, float y2){
    return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2;
}

float calculaPerimetro(Poligono polly, int quanti){
    int i;
    float res = 0;
    for (i = 0; i < quanti-1; i++){
        res += calculoDistancia(polly.poli[i].x,polly.poli[i+1].x,polly.poli[i].y,polly.poli[i+1].y);    
    }
    return res;
}

void imprimir(Poligono polly, float perimetro, int quanti){
    int i;
    printf("\n%s\n", RESULTADO);
    for (i = 0; i < quanti; i++){
        printf("Esse e o ponto %d : (%2.1f,%2.1f)\n",i+1,polly.poli[i].x,polly.poli[i].y);
        printf("\n%s\n", CORTE);
    }
    printf("O resultado do perimetro desse poligono e: %-2.2f",perimetro);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int quanti = pedirQtde();
    Poligono element;
    pedirDadosPoligono(&element,quanti);
    float res = calculaPerimetro(element,quanti);
    imprimir(element,res,quanti);
    return 0;
}