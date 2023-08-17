/*Escreva um programa para calcular a redução do tempo de vida de 
um fumante. Pergunte a quantidade de cigarros fumados por dia e 
quantos anos ele já fumou. Considere que um fumante perde 10 
minutos de vida a cada cigarro, calcule quantos dias de vida 
um fumante perderá. Exiba o total de dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirCigarro();
int pedirAnos();
int calcularTempo(int cigarrosPorDia, int anosFumados);

int main() {
    printf("\n%s\n", inicio);
    int cigarro, tempo, res;
    cigarro = pedirCigarro();
    tempo = pedirAnos();
    res = calcularTempo(cigarro, tempo);
    printf("\n%s\n", resultado);
    puts("O tempo de vida estimado desse cidadao...\n");
    printf("....E de aproximadamente: %d dias\n", res);
    printf("\n%s\n", corte);
    return 0;
}

int pedirCigarro() {
    int num;
    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &num);
    while (num <= 0) {
        printf("Informação incompatível. Digite a quantidade de cigarros fumados por dia: ");
        scanf("%d", &num);
    }
    return num;
}

int pedirAnos() {
    int num;
    printf("Digite a quantidade de anos que essa pessoa fumou: ");
    scanf("%d", &num);
    while (num <= 0) {
        printf("Informação incompatível. Digite a quantidade de anos que essa pessoa fumou: ");
        scanf("%d", &num);
    }
    return num;
}

int calcularTempo(int cigarrosPorDia, int anosFumados) {
    int minutosPerdidos = cigarrosPorDia * anosFumados * 365 * 10;  
    int diasPerdidos = minutosPerdidos / 1440;  
    return diasPerdidos;
}