#include <stdio.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"

int main() {
    printf("\n%s\n", inicio);
    int vetor[5];
    int cont;

    // preencher o vetor
    for(cont = 0; cont < 5; cont++){
        printf("Insira o valor para %d", cont+1);
        scanf("%d", &vetor[cont]);
    }
    
    printf("\n%s\n", resultado);
    // printar os indices do vetor
    for (cont = 0; cont < 5; cont++){
        printf("Esse e o valor no numero %d : %d", cont+1, vetor[cont]);
    }
}