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

int pedirCodigo();
float pedirAltura();
float pedirPeso();
void inserirClientes(int codigos[5],float altura[5],float pesos[5]);
float descobreAlto(int codigos[5],float altura[5]);
float descobreBaixo(int codigos[5],float altura[5]);
float descobreMagro(int codigos[5],float pesos[5]);
float descobreGordo(int codigos[5],float pesos[5]);

int main() {
    printf("\n%s\n", inicio);
    int vetorCodigo[5];
    float vetorAltura[5], vetorPeso[5];
    inserirClientes(vetorCodigo,vetorAltura,vetorPeso);
    
    printf("\n%s\n", resultado);
    
    printf("\n%s\n", corte);
    return 0;
}

void inserirClientes(int codigos[5],float altura[5], float pesos[5]){
    int i;
    for (i = 0; i < 5; i++){
        codigos[i] = pedirCodigo();
        altura[i] = pedirAltura();
        pesos[i] = pedirPeso();
    } 
}

float descobreAlto(int codigos[5],float altura[5]){
    int i, maior;
    maior = 0;
    for (i = 0; i < 5; i++){
        if (altura[i] > maior){
            maior =  altura[i];
        }
        
    }
    
}

