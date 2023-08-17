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
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirCodigo(int cont);
float pedirAltura(int cont);
float pedirPeso(int cont);
void inserirClientes(int codigos[5],float altura[5],float pesos[5]);
float descobreMagroBaixo(int codigos[5],float vetor[5]);
float descobreAltoGordo(int codigos[5],float vetor[5]);

int main() {
    printf("\n%s\n", inicio);
    int vetorCodigo[5];
    float vetorAltura[5], vetorPeso[5];
    inserirClientes(vetorCodigo,vetorAltura,vetorPeso);
    float alto, magro, gordo, baixo;
    alto = descobreAltoGordo(vetorCodigo,vetorAltura);
    gordo = descobreAltoGordo(vetorCodigo,vetorPeso);
    baixo = descobreMagroBaixo(vetorCodigo,vetorAltura);
    magro = descobreMagroBaixo(vetorCodigo,vetorPeso);
    printf("\n%s\n", resultado);
    printf("O mais alto tem: %.2f\n", alto);
    printf("O mais baixo tem: %.2f\n", baixo);
    printf("O mais magro tem: %.2f\n", magro);
    printf("O mais gordo tem: %.2f\n", gordo);
    printf("\n%s\n", corte);
    return 0;
}

void inserirClientes(int codigos[5],float altura[5], float pesos[5]){
    int i;
    for (i = 0; i < 5; i++){
        codigos[i] = pedirCodigo(i);
        altura[i] = pedirAltura(i);
        pesos[i] = pedirPeso(i);
    } 
}


float descobreMagroBaixo(int codigos[5],float vetor[5]){
    int i;
    float variavel;
    variavel = 0;
    for (i = 0; i < 5; i++){
        if (vetor[i] < variavel){
            variavel =  vetor[i];
        }
    }
    return variavel;
}

float descobreAltoGordo(int codigos[5],float vetor[5]){
    int i;
    float variavel;
    variavel = 0;
    for (i = 0; i < 5; i++){
        if (vetor[i] > variavel){
            variavel =  vetor[i];
        }
    }
    return variavel;
}

int pedirCodigo(int cont){
    int num;
    do{
        printf("Digite o codigo do aluno %d: ", cont);
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

float pedirAltura(int cont){
    float num;
    do{
        printf("Digite a altura do aluno %d: ", cont);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

float pedirPeso(int cont){
    float num;
    do{
        printf("Digite o peso do aluno %d: ", cont);
        scanf("%f", &num);
    } while (num <= 0);
    return num;
}

