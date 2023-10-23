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

int pesquisar(int *vetor, int qtde, int pesq){ 
    int i; 
    for(i = 0; i < qtde; i++){ 
        if(vetor[i] == pesq){ 
            return i; 
        } 
    }
    return-1; 
}

int imprimirOnibus(Linhas *vet, int quanti){
    int i, x;
    for (i = 0; i < quanti; i++){
        printf("Onibus %d :\n", i+1);
        printf("\n%s\n", CORTE);
        printf("Horario de saida: %.2f h",vet[i].conjHorarios[0].hora);
        printf("Horario de saida: %.2f h",vet[i].conjHorarios[1].hora);
        printf("Horario de saida: %.2f h",vet[i].conjHorarios[2].hora);
        printf("Horario de saida: %.2f h",vet[i].conjHorarios[3].hora);
        printf("Horario de saida: %.2f h",vet[i].conjHorarios[4].hora);
        imprimirPoltronas(&vet->conjHorarios->numPoltronas);
        printf("\n%s\n", CORTE);
    }
}

void ativarOnibus(Linhas *linha){
    int i;
    for (i = 0; i < POLTRONAS; i++){
        linha->conjHorarios->numPoltronas[i] = 1;
    }
}

void perguntarInserir(char *res){
    do{
        printf("Voce deseja inserir uma linha de onibus?(sim/nao)");
        scanf(" %3[^\n]s", res);
    } while ((res != "nao")&&(res != "sim"));
}

void imprimirPoltronas(int *vet){
    int i, j;
    for (i = 0; i < 3; i++){
        printf("|");
        for (j = 0; j < POLTRONAS; j++){
            if (vet[j] == 0){
                printf("x");
                printf("|");    
            }else{
                printf("%d", j);
                printf("|");
            }
        }
        printf("\n");
    }
}

void inserirHorarios(Horario *vet){
    printf("Qual sera o horario de saida desse onibus: ");
    scanf("%f", vet->hora);
}

void pedirDados(Linhas *element, int *quanti){
    printf("Digite a cidade de origem dessa linha: ");
    scanf(" %29[^\n]s", element->cityOrigem);
    printf("Digite a cidade de origem dessa linha: ");
    scanf(" %29[^\n]s", element->cityDestino);
    printf("Digite a cidade de origem dessa linha: ");
    inserirHorarios(element->conjHorarios);
    *(quanti)++;
}

void realizarCompra(Linhas *element){
    int numOnibus;
    do{
        printf("Digite o numero do onibus que deseja embarcar: ");
        scanf("%d", &numOnibus-1);
    } while ((numOnibus < 0)||(numOnibus > 45));
    
    
}

int menuCompra(){
    int num;
    printf("\n%s\n", INICIO);
    printf("1 - MOSTRAR ONIBUS E POLTRONAS DISPONIVEIS\n");
    printf("2 - RESERVAR UM ASSENTO\n");
    printf("3 - ADICIONAR UMA NOVA LINHA\n");
    printf("4 - SAIR\n");
    printf("\n%s\n", CORTE);
    printf("Digite a sua opçao: ");
    scanf("%d", &num);
    return num;
}

int main() {
    SetConsoleOutputCP(65001);
    Linhas oni[10];
    int quantiLinhas = 0;
    int cont = 0, op, repete = 0, x;
    ativarOnibus(&oni);
    do{
        op = menuCompra();
        switch (op){
        case 1:
            if(quantiLinhas == 0){
                printf("Nao existe linhas disponiveis no momento");
            }else{
                x = imprimirOnibus(oni,quantiLinhas);
            }
            break;
    
        case 2:
            realizarCompra(&oni);
            break;

        case 3:
            pedirDados(&oni,&quantiLinhas);
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