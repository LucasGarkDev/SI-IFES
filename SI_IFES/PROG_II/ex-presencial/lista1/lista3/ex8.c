/*Faça um algoritmo que dado as notas de cada um dos alunos do 2º 
Período do curso de Bacharel de Sistemas de Informação, gere uma 
serie de estatísticas. Para tanto, serão fornecidos a matrícula, 
a nota e o sexo de cada aluno. Quando for informado uma matrícula
negativa (ou zero), encerrar a leitura das informações. Deseja-se
as seguintes informações estatísticas: 
 Quantos homens existem na turma ? 
 Quantas mulheres existem na turma ? 
 Qual é a média das notas ? 
 Quantos alunos DR existem na turma ? 
 Quantos alunos DI existem na turma ? 
 Qual a % de alunos DB, DR e DI na turma ? 
 Qual a % de homens DB, DR e DI na turma ? 
 Qual a % de mulheres DB, DR e DI na turma ? */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

int pedirDados(int cont, int desci) {
    int num;
    float nota;
    char sexo;
    if (desci == 1) {
        printf("Digite a matricula do estudante %d: ", cont);
        scanf("%d", &num);
        return num;
    } else if (desci == 2) {
        do {
            printf("Digite a nota do estudante %d: ", cont);
            scanf("%f", &nota);
        } while ((nota < 0) || (nota > 10));
        return nota;
    } else {
        do {
            printf("Digite o sexo do estudante %d (M-masculino/F-feminino): ", cont);
            scanf(" %c", &sexo);
        } while (sexo != 'M' && sexo != 'F');
        return sexo;
    }
}

int main() {
    printf("\n%s\n", INICIO);
    int matriculas[MAX];
    float notas[MAX];
    char sexo[MAX];
    int numMatricula, i = 0;
    float numNotas;
    int numHomens = 0, numMulheres = 0;
    float media = 0;
    int alunosDB = 0, alunosDR = 0, alunosDI = 0;

    do {
        numMatricula = pedirDados(i + 1, 1);
        if (numMatricula > 0) {
            matriculas[i] = numMatricula;
            numNotas = pedirDados(i + 1, 2);
            notas[i] = numNotas;
            char letraSexo = pedirDados(i + 1, 0);
            sexo[i] = letraSexo;
            i++;

            // Contagem de homens e mulheres
            if (letraSexo == 'M') {
                numHomens++;
            } else {
                numMulheres++;
            }

            // Cálculo da média
            media += numNotas;

            // Contagem de alunos por desempenho
            if (numNotas < 60) {
                alunosDI++;
            } else if (numNotas < 80) {
                alunosDR++;
            } else {
                alunosDB++;
            }
        }
    } while (numMatricula > 0);

    // Cálculo da média
    if (i > 0) {
        media /= i;
    }

    // Cálculo das porcentagens
    float porcenDB = (alunosDB * 100.0) / i;
    float porcenDR = (alunosDR * 100.0) / i;
    float porcenDI = (alunosDI * 100.0) / i;

    printf("\n%s\n", RESULTADO);
    printf("Quantidade de homens: %d\n", numHomens);
    printf("Quantidade de mulheres: %d\n", numMulheres);
    printf("Media das notas: %.2f\n", media);
    printf("Quantidade de alunos DB, DR, DI: %d, %d, %d\n", alunosDB, alunosDR, alunosDI);
    printf("Porcentagem de alunos DB, DR, DI: %.2f%%, %.2f%%, %.2f%%\n", porcenDB, porcenDR, porcenDI);
    printf("\n%s\n", CORTE);

    return 0;
}
