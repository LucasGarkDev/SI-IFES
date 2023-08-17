/*Implemente um programa em C que leia as três notas 
semestrais de um aluno e determine a média da nota 
semestral. Através da média calculada o algoritmo 
deve imprimir a seguinte mensagem: Aprovado, Reprovado
ou em Prova Final (a média é 7 para Aprovação, 
menor que 3 para Reprovação e as demais em Prova 
Final). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirNota(int cont);
float calcularMedia(float n1, float n2, float n3);
void mostrarResultado(float media);

int main(){
    printf("\n%s\n", inicio);
    float n1, n2, n3, media;
    n1 = pedirNota(1);
    n2 = pedirNota(2);
    n3 = pedirNota(3);
    media = calcularMedia(n1,n2,n3);
    mostrarResultado(media);
    printf("\n%s\n", corte);
    return 0;
}

float pedirNota(int cont){
    float num;
    printf("Digite o valor da nota %d: ", cont);
    scanf("%f", &num);
    while (num < 0 || num > 10){
        puts("Nota invalida");
        printf("Digite o valor da nota %d, novamente: ", cont);
        scanf("%f", &num);
    }
    return num;
}

float calcularMedia(float n1, float n2, float n3){
    float res;
    res = (n1 + n2 + n3) / 3;
    return res;
}

void mostrarResultado(float media){
    if (media > 7){
        printf("\n%s\n", resultado);
        puts("O aluno foi: Aprovado");
    }else if (media > 3){
        printf("\n%s\n", resultado);
        puts("O aluno esta de: Prova Final");
    }else{
        printf("\n%s\n", resultado);
        puts("O aluno foi: Reprovado");
    }
}