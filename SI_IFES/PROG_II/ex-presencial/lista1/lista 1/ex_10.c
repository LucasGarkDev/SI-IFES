/*Escreva um programa para calcular a redução do tempo de vida de 
um fumante. Pergunte a quantidade de cigarros fumados por dia e 
quantos anos ele já fumou. Considere que um fumante perde 10 
minutos de vida a cada cigarro, calcule quantos dias de vida 
um fumante perderá. Exiba o total de dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirCigarro(){
    int num;
    do{
        printf("Digite a quantidade cigarros consumidos por dia: ");
        scanf("%d", &num);
    } while ((num <= 0) || (num > 24));
    return num;
}

int pedirAnos(){
    int num;
    do{
        printf("Digite a quantidade de anos que esse individuo esta fumando: ");
        scanf("%d", &num);
    } while ((num <= 0) || (num > 100));
    return num;
}

int calculo(int cigarro, int anos){
    int minutosCigarro = 10, total, res, diasPerdidos;
    total = cigarro * anos * 365;
    res = total * minutosCigarro;
    diasPerdidos = res / (24 * 60);
    return diasPerdidos;
}
int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int cigarroDia, anos, res;
    cigarroDia = pedirCigarro();
    anos = pedirAnos();
    res = calculo(cigarroDia,anos);
    printf("\n%s\n", RESULTADO);
    printf("Esse cidadão vai sobreviver %d dias a menos que o normal", res);
    printf("\n%s\n", CORTE);
    return 0;
}