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

int main() {
    float notas[5];
    float maiorNota = 0, menorNota = 10, somaNotas = 0;
    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do jurado %d: ", i + 1);
        scanf("%f", &notas[i]);
        // Encontrar a maior e a menor nota
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
        somaNotas += notas[i];
    }
    // Excluir a maior e a menor nota
    somaNotas -= (maiorNota + menorNota);
    // Calcular a média com as notas restantes
    float media = somaNotas / 3;
    printf("\nMédia das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    return 0;
}