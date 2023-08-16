/*Implemente um programa em C que dada a idade de uma pessoa, determine sua
classificação segundo as informações:
 maior de idade;
 menor de idade;
 pessoa idosa (idade superior ou igual a 65 anos).*/

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
    if (idade > 65){
        printf("\n%s\n", resultado);
        puts("Esse individuo e idoso");
    }else if (idade > 18){
        printf("\n%s\n", resultado);
        puts("Esse individuo e maior de idade");
    }else{
        printf("\n%s\n", resultado);
        puts("Esse individuo e menor de idade");
    }
}
