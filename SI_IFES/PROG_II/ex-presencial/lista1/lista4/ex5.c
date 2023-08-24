/*DESAFIO: Cassino. Altere o Jogo de Craps da questão anterior para que o 
jogador possa apostar. Ele começa com R$ 100,00. No início de cada 
rodada ele informa quanto quer apostar. Se perder, perde esse valor. 
Se ganhar, ganha o dobro do que apostou. No final de cada rodada informe
o total que ele tem em dinheiro e pergunte se quer continuar jogando 
ou se quer parar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para os números aleatórios
#include <windows.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

// ########## JOGO DE CRAPS ###################

// Jogar os dados. O resto da divisão por 6 é
// um número de entre 0 e 5, por isso soma-se 1
int lancarDado() {
    return (rand() % 6) + 1;
}

int jogarDados() {
    int d1, d2, soma;
    printf("\n\nVamos jogar os dados\n");
    system("PAUSE");
    d1 = lancarDado();
    d2 = lancarDado();
    soma = d1 + d2;
    printf("Dado 1: %d\nDado 2: %d\n\n", d1, d2);
    printf("SOMA: %d\n", soma);
    printf("---------------------\n\n");
    return soma;
}

float pedirAposta(float saldo) {
    float num;
    do {
        printf("Digite o valor da aposta (não pode ser maior que o saldo disponível): ");
        scanf("%f", &num);
    } while ((num > saldo) || (num < 0));
    return num;
}

int segundaRodada(int ponto, float saldo, float aposta) {
    int dado;
    do {
        dado = jogarDados();
    } while ((dado != ponto) && (dado != 7));
    
    if (dado == ponto) {
        printf("\n%s\n", resultado);
        saldo += aposta * 2;
        printf("Voce Ganhou!!!\n");
        printf("O seu saldo atual é de: %.2f\n", saldo);
    } else {
        printf("\n%s\n", resultado);
        saldo -= aposta;
        printf("Voce Perdeu!!!\n");
        printf("O seu saldo atual é de: %.2f\n", saldo);
    }
    return saldo;
}

char desejaContinuar() {
    char letra;
    do {
        printf("Voce deseja continuar jogando (S-sim/N-nao): ");
        scanf(" %c", &letra);
    } while ((letra != 'S') && (letra != 's') && (letra != 'N') && (letra != 'n'));
    return letra;
}

int verificaCraps(int soma, float saldo) {
    float aposta;
    aposta = pedirAposta(saldo);
    
    if ((soma == 7) || (soma == 11)) {
        printf("\n%s\n", resultado);
        saldo += aposta * 2;
        printf("Voce Ganhou!!!\n");
        printf("O seu saldo atual é de: %.2f\n", saldo);
    } else if ((soma == 2) || (soma == 3) || (soma == 12)) {
        printf("\n%s\n", resultado);
        saldo -= aposta;
        printf("Voce Perdeu!!!\n");
        printf("O seu saldo atual é de: %.2f\n", saldo);
    } else {
        printf("-----------PONTO-----------\n");
        printf("Valor do ponto : %d\n", soma);
        saldo = segundaRodada(soma, saldo, aposta);
    }
    return saldo;
}

int main() {
    SetConsoleOutputCP(65001);
    // SEMENTE DOS NUMEROS ALEATÓRIOS. Usa a hora local
    srand((unsigned)time(NULL));
    int turno;
    float saldo = 100.00;
    char continuar;
    printf("\n%s\n", inicio);
    
    do {
        turno = jogarDados();
        saldo = verificaCraps(turno, saldo);
        if (saldo <= 0) {
            printf("Você não tem saldo suficiente para continuar.\n");
            break;
        }
        continuar = desejaContinuar();
    } while ((continuar == 'S') || (continuar == 's'));
    
    printf("Obrigado por jogar! Seu saldo final é de: %.2f\n", saldo);
    
    return 0;
}
