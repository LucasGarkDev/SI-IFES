#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main() {
    printf("\n%s\n", inicio);
    int inserirNum, itemPesquisa, res = -1;
    char outraVez = 'S';

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    do {
        printf("Digite o número que você deseja pesquisar no vetor: ");
        scanf("%d", &itemPesquisa);

        res = -1; // Valor inicial de -1

        for (int cont = 0; cont < 10; cont++) {
            if (vetor[cont] == itemPesquisa) {
                res = vetor[cont];
                break;
            }
        }
        
        printf("\n%s\n", resultado);
        if (res != -1) {
            printf("O item %d foi encontrado\n", res);
        } else {
            printf("O item não foi encontrado\n");
        }
        
        printf("Você deseja pesquisar outro item (S/N)? ");
        scanf(" %c", &outraVez);
    } while (outraVez == 'S');
}