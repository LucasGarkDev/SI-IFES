/*. Seja a seguinte série:
1, 4, 9, 16, 25, 36, ...
Implemente um programa que gere esta série até o N-ésimo (último) 
termo. Este N-ésimo termo é digitado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirStop(){
    int num;
    printf("1, 4, 9, 16, 25, 36, ...\n");
    do{
        printf("Considerando essa sequencia de numeros, onde deseja que pare: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void imprimir(int stop){
    int i;
    int valor = 1;
    int razao = 3;
    for (i = 0; i < stop; i++){
        printf("%d,", valor);
        valor += razao;
        razao += 2;
    }
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int stop;
    stop = pedirStop();
    printf("\n%s\n", RESULTADO);
    imprimir(stop);
    printf("\n%s\n", CORTE);
    return 0;
}