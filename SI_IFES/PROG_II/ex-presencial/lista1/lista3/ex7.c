/*Uma academia deseja fazer um senso entre seus clientes para descobrir o 
mais alto, o mais baixo, o mais gordo e o mais magro. Para isto 
você deve fazer um programa que pergunte a cada um dos clientes 
da academia seu código, sua altura e seu peso. O final da digitação de
dados deve ser dado quando o usuário digitar 0 (zero) no campo código. 
Ao encerrar o programa devem ser informados os códigos e valores 
do cliente mais alto, do mais baixo, do mais gordo e do mais magro, 
além da média das alturas e dos pesos dos clientes.
*/

#include <stdio.h>
#include <stdlib.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

float pedirCodigo(int cont, int desci) {
    float num;
    if (desci == 1) {
        printf("Digite o codigo do aluno %d: ", cont);
        scanf("%f", &num);
        return num;
    } else if (desci == 2) {
        printf("Digite a altura do aluno %d: ", cont);
        scanf("%f", &num);
        return num;
    } else {
        printf("Digite o peso do aluno %d: ", cont);
        scanf("%f", &num);
        return num;
    }
}

void inserirAlunos(float *codigos, float *alturas, float *pesos) {
    int cont = 0;
    float aluno, altura, peso;
    do {
        aluno = pedirCodigo(cont + 1, 1);
        codigos[cont] = aluno;

        // Use scanf("%f", &altura) e scanf("%f", &peso) para ler alturas e pesos.
        altura = pedirCodigo(cont + 1, 2);
        alturas[cont] = altura;
        peso = pedirCodigo(cont + 1, 3);
        pesos[cont] = peso;

        cont++;
    } while (aluno != 0);
}

float identifica(float *vetor, int desci, int cont) {
    int i;
    float comp = vetor[0];
    for (i = 0; i < cont; i++) {
        if ((desci == 1 && vetor[i] > comp) || (desci == 2 && vetor[i] < comp)) {
            comp = vetor[i];
        }
    }
    return comp;
}

int main() {
    printf("\n%s\n", INICIO);
    float codigos[MAX];
    float alturas[MAX];
    float pesos[MAX];
    inserirAlunos(codigos, alturas, pesos);
    int cont = 0;
    float maiorAltura, menorAltura, maiorPeso, menorPeso;
    while (codigos[cont] != 0) {
        cont++;
    }
    maiorAltura = identifica(alturas, 1, cont);
    menorAltura = identifica(alturas, 2, cont);
    maiorPeso = identifica(pesos, 1, cont);
    menorPeso = identifica(pesos, 2, cont);
    printf("\n%s\n", RESULTADO);
    printf("O cliente mais alto: %.2f\n", maiorAltura);
    printf("O cliente mais baixo: %.2f\n", menorAltura);
    printf("O cliente mais gordo: %.2f\n", maiorPeso);
    printf("O cliente mais magro: %.2f\n", menorPeso);
    printf("\n%s\n", CORTE);
    return 0;
}

