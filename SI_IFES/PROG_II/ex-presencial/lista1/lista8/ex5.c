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
#define TAM 20
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

void imprimirPoltronas(){
    int i;
    for (i = 0; i < POLTRONAS; i++){
        printf("%d | %d | %d \n",i,i+1,i+2);
    }
}

void inserirHorarios(Horario *vet){
    int i;
    for (i = 0; i < TAM2; i++){
        printf("Qual sera o %d horario de saida desse onibus: ", i+1);
        scanf("%d", vet->hora);
    }
}

void pedirDados(Linhas *element){
    printf("Digite a cidade de origem dessa linha: ");
    scanf(" %19[^\n]s", element->cityOrigem);
    printf("Digite a cidade de origem dessa linha: ");
    scanf(" %19[^\n]s", element->cityDestino);
    printf("Digite a cidade de origem dessa linha: ");
    inserirHorarios(element->conjHorarios);
}

void realizarCompra(Linhas *element){
    int num, i;
    do{
        printf("Digite o numero da poltrona que deseja: ");
        scanf("%d", &num);
    } while ((num < 0)||(num > 45));
    for (i = 0; i < POLTRONAS; i++){
        if ((num == i) &&(element->conjHorarios->numPoltronas[i] != 0)){
            element->conjHorarios->numPoltronas[i] = 0;
            printf("A sua compra foi efetuada com sucesso!!!");
        }else{
            printf("Desculpe mais essa poltrona ja foi comprada.");
        }
    }
}

int menuCompra(){
    int num;
    printf("\n%s\n", INICIO);
    printf("1 - MOSTRAR POLTRONAS DISPONIVEIS\n");
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
    printf("\n%s\n", INICIO);
    Linhas oni;
    char deseja[4];
    int cont = 0, op, repete = 0;
    ativarOnibus(&oni);
    do{
        op = menuCompra();
        switch (op){
        case 1:
            imprimirPoltronas(&oni.conjHorarios->numPoltronas);
            break;
    
        case 2:
            realizarCompra(&oni);
            break;

        case 3:
            perguntarInserir(deseja);
            while (deseja == "sim"){
                pedirDados(&oni,cont);
                cont++;
                perguntarInserir(deseja);  
            }
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