#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    char *nome;
    char *ponteiro;
    int quanti = pedirQtde(), i;
    alocarMEM(nome,quanti);
    inserirString(nome,quanti);
    int numPalavra = (strlen(nome)/2);
    for (i = 0; i < quanti; i++){
        *ponteiro = strchr(nome,'1');
    }
    

    return 0;
}