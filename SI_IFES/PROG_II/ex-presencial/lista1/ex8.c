#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 5

// int pedirQtde();
int pedirMatricula(int cont);
float pedirNota(int cont);
char pedirSexo(int cont);
int classificacao();
char contagemH(char vetor[tam]);

int main() {
    printf("\n%s\n", inicio);
    int quanti, matricula, i;
    float nota;
    char sexo;
    // quanti = pedirQtde();
    int matriculas[tam];
    float notas[tam];
    char sexos[tam];
    for (i = 1; i <= tam; i++){
        matricula = pedirMatricula(i);
        matriculas[i] = matricula;
        nota = pedirNota(i);
        notas[i] = nota
        sexo = pedirSexo(i);
        sexos[i] = sexo;
    }
    printf("\n%s\n", resultado);
    
    printf("\n%s\n", corte);
    return 0;
}

int pedirMatricula(int cont){
    int num;
    do{
        printf("Digite o numero de matricula do aluno %d: ", cont);
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

char contagemH(char vetor[tam]){
    
}
