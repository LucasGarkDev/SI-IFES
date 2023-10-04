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

void lerPonto(Ponto *x, Ponto *y, Ponto *cor){
    *x = pedirXY('X');
    *y = pedirXY('Y');
    lerCor(&cor);
}

void imprimir(int cont,Ponto x, Ponto y, Ponto cor[]){
    printf("\n%s\n", RESULTADO);
    printf("O valor do ponto %d e:\n", cont);
    printf("O ponto e: (%f,%f)", x, y);
    printf("A cor do ponto e: %s", cor);
    printf("\n%s\n", CORTE);
}

int main() {
    SetConsoleOutputCP(65001);
    Ponto p1, p2;
    printf("\n%s\n", INICIO);
    lerPonto(&p1.x,&p1.y,p1.cor);
    lerPonto(&p2.x,&p2.y,p2.cor);
    imprimir(1,p1.x,p1.y,p1.cor);
    imprimir(2,p2.x,p2.y,p2.cor);
    return 0;

}
