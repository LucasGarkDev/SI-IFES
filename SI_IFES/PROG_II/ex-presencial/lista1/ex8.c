#include <stdio.h>

#define tam 100 // Defina o tamanho máximo da turma

int main() {
    int matricula[tam];
    float nota[tam];
    char sexo[tam];
    int i = 0;
    int homens = 0, mulheres = 0;
    int alunosDB = 0, alunosDR = 0, alunosDI = 0;
    float somaNotas = 0;
    
    printf("Digite a matrícula, nota e sexo de cada aluno (matrícula negativa ou zero para encerrar):\n");
    
    while (1) {
        printf("Matrícula do aluno %d: ", i + 1);
        scanf("%d", &matricula[i]);
        
        if (matricula[i] <= 0) {
            break;
        }
        
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota[i]);
        
        printf("Sexo do aluno %d (m/f): ", i + 1);
        scanf(" %c", &sexo[i]);
        
        if (sexo[i] == 'm') {
            homens++;
        } else {
            mulheres++;
        }
        
        somaNotas += nota[i];
        
        if (nota[i] >= 80) {
            alunosDB++;
        } else if (nota[i] >= 60) {
            alunosDR++;
        } else {
            alunosDI++;
        }
        
        i++;
    }
    
    int totalAlunos = i;
    float mediaNotas = somaNotas / totalAlunos;
    float percentualDB = (float) alunosDB / totalAlunos * 100;
    float percentualDR = (float) alunosDR / totalAlunos * 100;
    float percentualDI = (float) alunosDI / totalAlunos * 100;
    float percentualHomensDB = (float) alunosDB / homens * 100;
    float percentualHomensDR = (float) alunosDR / homens * 100;
    float percentualHomensDI = (float) alunosDI / homens * 100;
    float percentualMulheresDB = (float) alunosDB / mulheres * 100;
    float percentualMulheresDR = (float) alunosDR / mulheres * 100;
    float percentualMulheresDI = (float) alunosDI / mulheres * 100;
    
    printf("Resultados:\n");
    printf("Quantidade de homens: %d\n", homens);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Média das notas: %.2f\n", mediaNotas);
    printf("Quantidade de alunos DB: %d\n", alunosDB);
    printf("Quantidade de alunos DR: %d\n", alunosDR);
    printf("Quantidade de alunos DI: %d\n", alunosDI);
    printf("Percentual de alunos DB: %.2f%%\n", percentualDB);
    printf("Percentual de alunos DR: %.2f%%\n", percentualDR);
    printf("Percentual de alunos DI: %.2f%%\n", percentualDI);
    printf("Percentual de homens DB: %.2f%%\n", percentualHomensDB);
    printf("Percentual de homens DR: %.2f%%\n", percentualHomensDR);
    printf("Percentual de homens DI: %.2f%%\n", percentualHomensDI);
    printf("Percentual de mulheres DB: %.2f%%\n", percentualMulheresDB);
    printf("Percentual de mulheres DR: %.2f%%\n", percentualMulheresDR);
    printf("Percentual de mulheres DI: %.2f%%\n", percentualMulheresDI);
    
    return 0;
}