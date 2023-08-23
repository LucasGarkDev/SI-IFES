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
#include <math.h> // Para pegar o PI

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para os números aleatórios
// ########## JOGO DE CRAPS ###################

// Jogar os dados. O resto da divisão por 6 é
// um número de entre 0 e 5, por isso soma-se 1
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

int main(){
    // SEMENTE DOS NUMEROS ALEATÓRIOS. Usa a hora local
    srand( (unsigned)time(NULL) );
    // Continue a partir daqui ...
    return 0;
}
