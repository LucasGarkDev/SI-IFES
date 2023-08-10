#include <stdio.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 3

struct pessoa {
    int idade;
    float peso;
    char nome[50];
};

typedef struct pessoa tpPessoa;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);

    tpPessoa lista[tam];
    int i;

    for (i = 0; i < tam; i++) {
        printf("\nInsira os dados (%d):\n", i + 1);
        printf("\n%s\n", corte);

        printf("Nome: ");
        scanf("%49[^\n]", lista[i].nome);
        limparBuffer();

        printf("\n%s\n", corte);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        limparBuffer();

        printf("\n%s\n", corte);

        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        limparBuffer();

        printf("\n%s\n", corte);
    }

    system("cls");

    printf("\n%s\n", resultado);
    for (i = 0; i < tam; i++) {
        printf("----------------PESSOA %d----------------\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %.2f\n", lista[i].peso);
        printf("%s\n", corte);
    }

    system("pause"); // Aguarda o usuário pressionar uma tecla antes de finalizar o programa.

    return 0;
}
