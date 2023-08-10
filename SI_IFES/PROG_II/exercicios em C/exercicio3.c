#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirTempo();
int descobreHoras(int tempo);
int descobreMinutos(int tempo);
void imprimirResultado(int h, int min, int seg);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int tempoSegundos = pedirTempo();
    int horas = descobreHoras(tempoSegundos);
    tempoSegundos %= 3600;
    int minutos = descobreMinutos(tempoSegundos);
    tempoSegundos %= 60;
    imprimirResultado(horas,minutos,tempoSegundos);
}

int pedirTempo(){
    int tempo;
    printf("Digite a quantidade de tempo em segundos:\n");
    scanf("%d", &tempo);
    while (tempo <= 0){
        puts("Tempo invalido!");
        printf("Digite a quantidade de tempo em segundos:\n");
        scanf("%d", &tempo);
    }
    return tempo;
}

int descobreHoras(int tempo){
    int horas;
    horas = tempo / 3600;
    return horas;
}

int descobreMinutos(int tempo){
    int minutos;
    minutos = tempo / 60;
    return minutos;
}

void imprimirResultado(int h, int min, int seg){
    printf("\n%s\n", resultado);
    printf("O tempo convertido sera: %d:%d:%d", h,min,seg);
    printf("\n%s\n", corte);
}