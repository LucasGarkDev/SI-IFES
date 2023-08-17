/*Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
 não eleitor (abaixo de 16 anos);
 eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
 eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirIdade();
void decisao(int idade);

int main(){
    printf("\n%s\n", inicio);
    int ida;
    ida = pedirIdade();
    decisao(ida);
    printf("\n%s\n", corte);
    return 0;
}

int pedirIdade(){
    int num;
    printf("Digite a idade do individuo: ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Idade invalido");
        printf("Digite a idade do individuo: ");
        scanf("%d", &num);
    }
    return num;
}

void decisao(int idade){
    if (idade < 16){
        puts("Esse individuo nao e eleitor");
    }else if (idade < 18){
        puts("Esse individuo e eleitor facultativo");
    }else if (idade <= 65){
        puts("Esse individuo e eleitor obrigatorio");
    }else{
        puts("Esse individuo e eleitor facultativo");
    }  
}
