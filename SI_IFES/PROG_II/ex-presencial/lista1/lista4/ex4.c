/*Jogo de Craps. Faça um programa que implemente um jogo de Craps. O jogador lança um par
de dados, obtendo a soma entre 2 e 12. Se na primeira jogada você tirar 7 ou 11, você ganhou.
Se você tirar 2, 3 ou 12 na primeira jogada, isto é chamado de "craps" e você perdeu. Se na
primeira jogada você somou 4, 5, 6, 8, 9 ou 10, este é seu "Ponto". Seu objetivo agora é
continuar jogando os dados até tirar este número novamente. Você perde, no entanto, se tirar
um 7 antes de tirar este “Ponto” novamente.
A função lancarDado() abaixo retorna um número aleatório entre 1 e 6 e
simula o lançamento de um dado.
A função jogarDados() simula uma jogada com os dois dados e retorna a
soma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int lancarDado(){
 return ( rand() % 6) + 1;
}

int jogarDados(){
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

int continua(int rolagem, int ponto){
    int res;
    do{
        rolagem = jogarDados();
        if (rolagem == 7){
            res = 0;
        }else if (rolagem == ponto){
            res = 1;
        }
    } while ((res != 1)&&(res != 0)); 
    return res;
}

int analisaCraps(){
    int rolagem, rolagem2, res;
    rolagem = jogarDados();
    if ((rolagem == 7)||(rolagem == 11)){
        return 1;
    }else if ((rolagem == 2)||(rolagem == 3)||(rolagem == 12)){
        return 0;
    }else{
        printf("-----------------------\n");
        printf("       PONTO: %d       \n", rolagem);
        printf("-----------------------\n");
        rolagem2 = jogarDados();
        res = continua(rolagem2, rolagem);
        return res;
    }
}

int main() {
    SetConsoleOutputCP(65001);
    srand( (unsigned)time(NULL) );
    printf("\n%s\n", INICIO);
    int res;
    res = analisaCraps();
    printf("\n%s\n", RESULTADO);
    if (res == 1){
        printf("Voce ganhou!!! Parabens....");
    }else{
        printf("Voce Perdeu!!! Deu ruim....");
    }
    printf("\n%s\n", CORTE);
    return 0;
}
