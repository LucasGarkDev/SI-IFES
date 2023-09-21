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
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

// int pedirQuanti(int *vetor){
//     int num;
//     int tamanho = sizeof(vetor)/sizeof(vetor[0]);
//     do{
//         printf("Digite a quantidade de atletas: ");
//         scanf("%d", &num);
//     } while ((num <= 0)||(num > tamanho));
//     return num;
// }

float pedirAltura(int cont){
    float num;
    do{
        printf("Digite o valor da altura do atleta %d(digite 0 para parar): ", cont);
        scanf("%f", &num);
    } while (num < 0);
    return num;
}

float maiorMenorAltura(float *vetor, int quanti, int desci){
    int i, maior = 0.0, menor = 99.9;
    if (desci == 1){
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
}

float calculaMedia(float *vetor, int quanti){
    float soma = 0;
    int i;
    for (i = 0; i < quanti; i++){
        soma += vetor[i];
    }
    return soma/quanti;
}

int main() {
    SetConsoleOutputCP(65001);
    float alturas[MAX];
    int quanti = 1, i;
    float inserir, maior, menor, media;
    do{
        inserir = pedirAltura(quanti);
        if (inserir != 0){
            alturas[quanti-1] = inserir;
            quanti++;
        }
    } while (inserir != 0);
    maior = maiorMenorAltura(alturas,quanti-1,1);
    menor = maiorMenorAltura(alturas,quanti-1,0);
    media = calculaMedia(alturas,quanti-1);
    printf("\n%s\n", RESULTADO);
    printf("A maior altura é: %.2f\n", maior);
    printf("A menor altura é: %.2f\n", menor);
    printf("A media das alturas é: %.2f\n", media);
    printf("As alturas acima da media:\n");
    for (i = 0; i < quanti-1; i++){
        if (alturas[i] >= media){
            printf("%.2f, ", alturas[i]);
        }
    }
    printf("\n%s\n", CORTE);
    return 0;
}
