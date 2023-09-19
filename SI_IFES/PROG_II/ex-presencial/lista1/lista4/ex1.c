/*Faça um programa com funções em C para ler a matrícula do aluno e suas três notas. Valide
os dados de entrada. A matrícula deve ser maior que zero e as notas entre 0 e 10. Calcule a
média final do aluno e imprima: “APROVADO” se a média for maior ou igual a 7;
“REPROVADO” se a média for menor que 6; e “PROVA FINAL” se a média estiver entre 6 e 7.
Faça uma função para cada operação: ler e validar a matrícula; ler e validar as notas; calcular a
média e imprimir a mensagem.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

float pesquisar(int vetor[], int quanti, int pesq) {
    int i;
    for (i = 0; i < quanti; i++) {
        if (vetor[i] == pesq) {
            return i;
        }
    }
    return -1;
}

int pedirMatricula(int vetor[], int cont) {
    int matricula, verifica;
    do {
        printf("Digite a matricula do aluno %d: ", cont + 1);
        scanf("%d", &matricula);
        verifica = pesquisar(vetor, cont, matricula);
    } while (matricula < 0 || verifica != -1);
    return matricula;
}

float pedirNota(int cont) {
    float num;
    do {
        printf("Digite o valor da nota do aluno %d: ", cont + 1);
        scanf("%f", &num);
    } while (num < 0 || num > 10);
    return num;
}

void imprimirSofisticado(float vetor[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        if(vetor[i] >= 7){
            printf("O aluno %d esta: APROVADO\n", i + 1);
        }else if(vetor[i] >= 6){
            printf("O aluno %d esta: PROVA FINAL\n", i + 1);
        }else{
            printf("O aluno %d esta: REPROVADO\n", i + 1); 
        }
    }
}

int main() {
    printf("\n%s\n", INICIO);
    int matriculas[10], i = 0, numAlunos = 0;
    float notas[10], media;
    int inserir;
    do {
        inserir = pedirMatricula(matriculas, numAlunos);
        if (inserir > 0) {
            matriculas[numAlunos] = inserir;
            notas[numAlunos] = pedirNota(numAlunos);
            numAlunos++;
        }
    } while (inserir != 0);
    printf("\n%s\n", RESULTADO);
    imprimirSofisticado(notas,numAlunos);
    printf("\n%s\n", CORTE);
    return 0;
}
