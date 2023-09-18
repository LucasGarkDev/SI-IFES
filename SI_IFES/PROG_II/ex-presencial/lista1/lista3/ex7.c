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
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 100

int pesquisar(int*vetor, int qtde, int pesq){ 
    int i; 
    for (i = 0; i < qtde; i++){ 
        if(vetor[i] == pesq){
            return i;
        } 
    } 
    return-1; 
}

float pedirCodigo(int cont, float vetor[], int desci){
    int verifica;
    float num;
    if (desci == 1){
        do{
            printf("Digite o codigo do aluno %d: ", cont);
            scanf("%f", &num);
            verifica = pesquisar(vetor,MAX,num);
        } while (verifica != -1);
        return num;
    }else if (desci == 2){
        do{
            printf("Digite a altura do aluno %d: ", cont);
            scanf("%f", &num);
            verifica = pesquisar(vetor,MAX,num);
        } while (verifica != -1);
        return num;
    }else{
        do{
            printf("Digite o peso do aluno %d: ", cont);
            scanf("%f", &num);
            verifica = pesquisar(vetor,MAX,num);
        } while (verifica != -1);
        return num;
    }
}

void inserirAlunos(float *codigos, float *alturas, float *pesos){
    int cont = 0;
    float aluno, altura, peso;
    do{
        aluno = pedirCodigo(cont+1,codigos,1);
        codigos[cont] = aluno;
        altura = pedirCodigo(cont+1,alturas,2);
        alturas[cont] = altura;
        peso = pedirCodigo(cont+1,pesos,0);
        pesos[cont] = peso;
        cont++;
    } while (aluno != 0);

}

float identifica(float *vetor, int desci){
    int i;
    float comp1 = 0.0 , comp2 = 99.0;
    if (desci == 1){
        for (i = 0; i < MAX; i++){
            if (vetor[i] > comp1){
                comp1 = vetor[i];
            }
        }
        return comp1;
    }else{
        for (i = 0; i < MAX; i++){
            if (vetor[i] < comp2){
                comp2 = vetor[i];
            }
        }
        return comp2;
    }
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    float codigos[MAX];
    float alturas[MAX];
    float pesos[MAX];
    inserirAlunos(codigos,alturas,pesos);
    float maior, menor, gordo, magro;
    maior = identifica(alturas,1);
    menor = identifica(alturas,2);
    gordo = identifica(pesos,1);
    magro = identifica(pesos,2);
    printf("\n%s\n", RESULTADO);
    printf("O cliente mais alto: %.2f", maior);
    printf("O cliente mais baixo: %.2f", menor);
    printf("O cliente mais gordo: %.2f", gordo);
    printf("O cliente mais magro: %.2f", magro);
    printf("\n%s\n", CORTE);
    return 0;
}
