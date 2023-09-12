/*Implemente um programa com funções para que leia a altura de 
vários atletas e armazene em um vetor. Perceba que não sei a 
quantidade que vou armazenar. Então precisa-se de um tamanho 
máximo para o vetor ser declarado e outro tamanho para a 
quantidade realmente lida. Não deixe ultrapassar esse máximo.
Crie uma função para encontrar a maior altura, outra para 
encontrar a menor altura e outra para calcular a média. Ao 
final, você deve imprimir a maior altura, a menor altura, a 
média das alturas e a altura daqueles atletas que estão 
acima da média.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 5

float pedirAltura(int cont){
    float num;
    do{
        printf("Digite a altura do atleta %d(digite 0 para parar): ", cont+1);
        scanf("%f", &num);
    } while ((num < 0)||(num > 100.0));
    return num;
}

float calculaMedia(int vetor[], int quanti){
    int i, soma, res;
    for (i = 0; i < quanti; i++){
        soma += vetor[i];
    }
    res = soma/quanti;
    return res;
}

float retornarMaiorMenor(int vetor[], int quanti, int deci){
    int i;
    float maior = 0.0;
    float menor = 99.0;
    if (deci == 1){
        for (i = 0; i < quanti; i++){
            if (vetor[i] > maior){
                maior = vetor[i];
            } 
        }
        return maior;   
    }else{
        for (i = 0; i < quanti; i++){
            if (vetor[i] < menor){
                menor = vetor[i];
            } 
        }
        return menor;
    } 
    return -1;
}

int acrescentar(int *vetor){
    int altura, qtde, i = 0;
    do{
        altura = pedirAltura(i);
        vetor[i] = altura;
        i++;
        if (i == MAX){
            qtde = i * 2; 
            *vetor = (int *)realloc(vetor, qtde * sizeof(int));
        }
    } while (altura != 0);
    return i-1;
}

int main(){
    printf("\n%s\n", INICIO);
    int vetorAltura[MAX];
    int quanti = 0;
    float maior, menor, media;
    quanti = acrescentar(vetorAltura);
    maior = retornarMaiorMenor(vetorAltura,quanti,1);
    menor = retornarMaiorMenor(vetorAltura,quanti,0);
    media = calculaMedia(vetorAltura,quanti);
    printf("\n%s\n", RESULTADO);
    printf("\nA maior altura foi: %.2f\n", maior);
    printf("\nA menor altura foi: %.2f\n", menor);
    printf("\nA media das altura foi: %.2f\n", media);
    return 0;
}
