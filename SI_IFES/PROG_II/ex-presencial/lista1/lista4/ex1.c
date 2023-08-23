/*Faça um programa com funções em C para ler a matrícula do aluno e suas três notas. Valide
os dados de entrada. A matrícula deve ser maior que zero e as notas entre 0 e 10. Calcule a
média final do aluno e imprima: “APROVADO” se a média for maior ou igual a 7;
“REPROVADO” se a média for menor que 6; e “PROVA FINAL” se a média estiver entre 6 e 7.
Faça uma função para cada operação: ler e validar a matrícula; ler e validar as notas; calcular a
média e imprimir a mensagem.
*/

#include <stdio.h>
#include <stdlib.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirMatricula(){
    int num;
    do{
        printf("Digite o numero da Matricula do aluno: ");
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

float pedirNota(int cont){
    float num;
    do{
        printf("Digite a nota %d do aluno: ", cont + 1);
        scanf("%f", &num);
    } while ((num < 0) || (num > 10));
    return num;
}

float calcularMedia(float soma){
    float media = soma / 3;
    return media;
}

void imprimir(float media){
    if (media >= 7){
        printf("O aluno esta: Aprovado");
    }else if (media >= 6){
        printf("O aluno esta: de Prova Final");
    }else{
        printf("O aluno esta: Reprovado");
    }
}

int main(){
    printf("\n%s\n", inicio);
    int matricula, i;
    float nota, somaNotas, mediaReal;
    matricula = pedirMatricula();
    for (i = 0; i < 3; i++){
        nota = pedirNota(i);
        somaNotas += nota;
    }
    mediaReal = calcularMedia(somaNotas);
    printf("\n%s\n", resultado);
    imprimir(mediaReal);
    printf("\n%s\n", corte);
    return 0;
}
