/*Acrescente à questão 3 uma estrutura para representar um Polígono 
qualquer. Um polígono é composto por vários pontos, ou seja, um vetor 
de pontos. No programa principal, declare uma variável do tipo Polígono
e chame as funções para ler e mostrar na tela os dados desse polígono.
*/

#include <stdio.h>
#include <stdlib.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

struct Ponto {
    float x;
    float y;
    char cor[20];
};

typedef struct Ponto Ponto;

struct Poligono {
    Ponto vetor[MAX];
};

typedef struct Poligono Poligono;

float pedirXY(char letra, int indicador) {
    float num;
    do {
        printf("Digite o valor do ponto %c%d:", letra, indicador);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

int pedirQtde() {
    int num;
    do {
        printf("Digite a quantidade de pontos no vetor: ");
        scanf("%d", &num);
    } while (num <= 0 || num > MAX);
    return num;
}

void lerPonto(Ponto *vetor, int indicador) {
    vetor->x = pedirXY('X', indicador + 1);
    vetor->y = pedirXY('Y', indicador + 1);
}

void lerPoligono(Poligono *vet, int quanti) {
    int i;
    for (i = 0; i < quanti; i++) {
        lerPonto(&(vet->vetor[i]), i);
    }
}

int main() {
    Poligono vet;
    int quanti = pedirQtde();
    printf("\n%s\n", INICIO);
    lerPoligono(&vet, quanti);
    int i;
    for (i = 0; i < quanti; i++) {
        printf("Ponto %d: (%.2f, %.2f)\n", i + 1, vet.vetor[i].x, vet.vetor[i].y);
    }

    return 0;
}

