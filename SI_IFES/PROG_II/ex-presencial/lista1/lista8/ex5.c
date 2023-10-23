/*Uma empresa de ônibus contratou você para desenvolver um sistema. Seu objetivo é 
criar apenas os registros para armazenar as linhas de ônibus, seus horários e as 
poltronas já vendidas. Para isso, você deve criar um registro (struct) com as 
informações da linha: cidade de origem, cidade de destino e um vetor de horários. 
O registro horário deve conter: hora, quantidade de poltronas disponíveis e um 
vetor para representar as 45 poltronas, onde cada poltrona armazenará o valor 1 
se a poltrona foi vendida e 0 caso contrário. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define TAM 30
#define TAM2 5
#define POLTRONAS 45

struct Horario{
    float hora;
    int numPoltronas[POLTRONAS];
};
typedef struct Horario Horario;

struct Linhas{
    char cityOrigem[TAM];
    char cityDestino[TAM];
    Horario conjHorarios[TAM2];
};
typedef struct Linhas Linhas;

int pesquisar(int *vetor, int qtde, float pesq){ 
    int i; 
    for(i = 0; i < qtde; i++){ 
        if(vetor[i] == pesq){ 
            return i; 
        } 
    }
    return-1; 
}

void imprimirOnibus(Linhas *vet, int quanti) {
    int i, j, k;
    for (i = 0; i < quanti; i++) {
        printf("Onibus %d :\n", i + 1);
        printf("\n%s\n", CORTE);
        for (j = 0; j < TAM2; j++) {
            printf("Horario de saida %.2f h:\n", vet[i].conjHorarios[j].hora);
            for (k = 0; k < POLTRONAS; k++) {
                printf("%d ", k + 1);
                if (vet[i].conjHorarios[j].numPoltronas[k] == 0) {
                    printf("x  ");
                } else {
                    printf("o  "); 
                }
                if ((k + 1) % (POLTRONAS / 3) == 0) {
                    printf("\n");
                }
            }
            printf("\n");
        }
        printf("\n%s\n", CORTE);
    }
}

void ativarOnibus(Linhas *linha) {
    int i, j, k;
    for (j = 0; j < 10; j++) {
        for (i = 0; i < 5; i++) {
            for (k = 0; k < POLTRONAS; k++) {
                linha[j].conjHorarios[i].numPoltronas[k] = 1;
            }
        }
    }
}

void inserirHorarios(Horario *vet) {
    for (int i = 0; i < TAM2; i++) {
        printf("Qual será o horário de saída para o horário %d (em horas): ", i + 1);
        scanf("%f", &vet[i].hora);
    }
}


void pedirDados(Linhas *element, int *quanti, int i) {
    printf("Digite a cidade de origem dessa linha: ");
    scanf(" %29[^\n]s", element[i].cityOrigem);
    printf("Digite a cidade de destino dessa linha: ");
    scanf(" %29[^\n]s", element[i].cityDestino);
    inserirHorarios(element[i].conjHorarios);
    (*quanti)++;
}

void realizarCompra(Linhas *element, int quanti) {
    int numOnibus, numHorario, numPoltrona;
    do{
        printf("Digite o número do ônibus que deseja embarcar (1 a 10): ");
        scanf("%d", &numOnibus);
    } while ((numOnibus > quanti)||(numOnibus <= 0));
    numOnibus--; 
    do{
        printf("Escolha o horário : ");
        scanf("%d", &numHorario);
    } while (numHorario < 1 || numHorario > 5);
    numHorario--; 
    printf("Escolha o número da poltrona (1 a 45): ");
    scanf("%d", &numPoltrona);
    numPoltrona--; 
    if (element[numOnibus].conjHorarios[numHorario].numPoltronas[numPoltrona] == 0) {
        printf("Poltrona já reservada.\n");
    } else {
        element[numOnibus].conjHorarios[numHorario].numPoltronas[numPoltrona] = 0;
        printf("Reserva bem-sucedida!\n");
    }
}


int menuCompra(){
    int num;
    printf("\n%s\n", INICIO);
    printf("1 - MOSTRAR ONIBUS E POLTRONAS DISPONIVEIS\n");
    printf("2 - RESERVAR UM ASSENTO\n");
    printf("3 - ADICIONAR UMA NOVA LINHA\n");
    printf("4 - SAIR\n");
    printf("%s\n", CORTE);
    printf("Digite a sua opçao: ");
    scanf("%d", &num);
    return num;
}

int main() {
    SetConsoleOutputCP(65001);
    Linhas oni[10];
    int quantiLinhas = 0;
    int i, op, repete = 0;
    ativarOnibus(oni);
    do {
        op = menuCompra();
        switch (op) {
            case 1:
                printf("\n%s\n", RESULTADO);
                if (quantiLinhas == 0) {
                    printf("Não existem linhas disponíveis no momento.\n");
                } else {
                    imprimirOnibus(oni, quantiLinhas);
                }
                break;

            case 2:
                printf("\n%s\n", RESULTADO);
                if (quantiLinhas == 0) {
                    printf("Não existem linhas disponíveis no momento.\n");
                } else {
                    realizarCompra(oni, quantiLinhas);
                }
                break;

            case 3:
                i = quantiLinhas;
                printf("\n%s\n", RESULTADO);
                pedirDados(oni, &quantiLinhas,i);
                break;

            case 4:
                repete = 1;
                break;

            default:
                repete = 0;
                break;
        }
    } while (repete == 0);
    return 0;
}