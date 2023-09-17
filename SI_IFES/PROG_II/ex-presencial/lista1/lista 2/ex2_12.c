/*Em uma competição de ginástica, cada atleta recebe votos 
de cinco jurados. As notas são de 0 a 10. A melhor e a 
pior nota são eliminadas. A sua nota fica sendo a média 
dos votos restantes. Você deve fazer um programa que 
receba as notas dos cinco jurados alcançadas pelo atleta
em sua apresentação e depois informe a sua média, 
conforme a descrição acima informada (retirar a melhor 
e a pior nota e depois calcular a média com as notas 
restantes). As notas não são informadas ordenadas. 
Ao final, mostrar a média das notas, a maior e a menor 
nota.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pedirNotas(int jurado){
    float num;
    do {
        printf("Digite a nota do jurado %d: ", jurado);
        scanf("%f", &num);
    } while ((num < 0)||(num > 10));
    return num;
}

void inserirNotas(float *notas, int quanti){
    int i;
    float nota;
    for (i = 0; i < quanti; i++){
        nota = pedirNotas(i+1);
        notas[i] = nota;
    }
}

float encontrarMaiorMenor(float notas[], int quanti, int desci){
    int i;
    float maior = 0.0;
    float menor = 99.0;
    if (desci == 1){
        for ( i = 0; i < quanti; i++){
            if (notas[i] > maior){
                maior = notas[i];
            }
        }
        return maior;
    }else{
        for ( i = 0; i < quanti; i++){
            if (notas[i] < menor){
                menor = notas[i];
            }
        }
        return menor;
    }
}

float calMedia(float vetor[], float maior, float menor, int quanti){
    int i;
    float soma;
    for (i = 0; i < quanti; i++){
        soma += vetor[i];
    }
    return (soma - maior - menor)/ (quanti - 2);
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float notas[5];
    float maior, menor, res;
    inserirNotas(&notas, 5);
    maior = encontrarMaiorMenor(notas,5,1);
    menor = encontrarMaiorMenor(notas,5,2);
    res = calMedia(notas,maior,menor,5);
    printf("\n%s\n", RESULTADO);
    printf("A media dessas notas foi: %.2f\n", res);
    printf("A maior nota foi: %.2f\n", maior);
    printf("A menor nota foi: %.2f", menor);
    printf("\n%s\n", CORTE);
    return 0;
}