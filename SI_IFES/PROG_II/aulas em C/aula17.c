#include <stdio.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 50

struct pessoa{
    int idade;
    float peso;
    char nome[tam];
};

typedef struct pessoa tpPessoa;

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n%s\n", inicio);
    
    tpPessoa pes = {0, 0.0, "Teste"};
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.idade: %s\n", pes.nome);

    printf("\n%s\n", corte);

    pes.idade = 10;
    pes.peso = 45.7;
    strcpy(pes.nome,"Jonisclaison da Cunha");

    printf("\nAlterando os valores via codigo\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.idade: %s\n", pes.nome);
    
    printf("\n%s\n", corte);

    printf("\nInsira um numero inteiro:\n");
    scanf("%d", &pes.idade);
    printf("\nInsira um numero decimal:\n");
    scanf("%f", &pes.peso); 
    fflush(stdin);
    printf("\nInsira uma palavra:\n");
    scanf("%s", pes.nome);

    printf("\nAlterando os valores com os dados do usuario\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

}