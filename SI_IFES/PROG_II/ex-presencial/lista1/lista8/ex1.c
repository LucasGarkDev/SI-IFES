/*Crie uma estrutura (struct) chamada Ponto, que represente uma coordenada com três
atributos: X (tipo float), Y (tipo float) e cor (tipo char[20]). Faça uma função para ler as
informações desse ponto. Crie outra função para mostrar os dados do ponto na tela. No
programa principal, declare dois pontos e chame as funções para ler e mostrar na tela esses
dois pontos.*/

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

void pedirDados(Ponto *element, int cont){
    element->x = pedirPonto(cont,1);
    element->y = pedirPonto(cont,0);
    pedirCor(&(element->cor),cont);
}

void imprimir(Ponto pt, int cont){
    printf("\n%s\n", RESULTADO);
    printf("O ponto %d e: (%2.1f,%2.1f)\n", cont,pt.x,pt.y);
    printf("A cor do ponto %d: %s\n", cont, pt.cor);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Ponto pt1 , pt2;
    int cont = 1;
    pedirDados(&pt1, cont);
    cont++;
    pedirDados(&pt2, cont);
    imprimir(pt1,1);
    imprimir(pt2,2);
    return 0;
}
