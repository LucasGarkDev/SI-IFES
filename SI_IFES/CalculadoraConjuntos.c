#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pesquisar(int vetor[], int pesq, int tamanho){
    int i, num;
    for (i = 0; i < tamanho; i++){
        if (vetor[i] == pesq){
            num = vetor[i];
            return num;
        }
    }
    return -1;
}

int pedirTamanho(char conjunto){
    int num;
    do{
        printf("Digite o tamanho do conjunto %c", conjunto);
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void inserirConjuntos(int *conjunto[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", conjunto[i]);
    }
}

int uniao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoUniao[]) {
    int i, j, tamanhoUniao;
    // Copiar o conjunto A para o conjunto de união
    for (i = 0; i < tamanho1; i++) {
        conjuntoUniao[i] = conjuntoA[i];
    }
    tamanhoUniao = tamanho1; // Inicializar tamanho do conjunto de união
    // Percorrer o conjunto B e adicionar elementos únicos ao conjunto de união
    for (i = 0; i < tamanho2; i++) {
        int elementoExiste = 0; // Variável para verificar se o elemento já existe na união
        // Verificar se o elemento de B já existe na união
        for (j = 0; j < tamanhoUniao; j++) {
            if (conjuntoB[i] == conjuntoUniao[j]) {
                elementoExiste = 1;
                break;
            }
        }
        // Se o elemento de B não existe na união, adicionar
        if (!elementoExiste) {
            conjuntoUniao[tamanhoUniao] = conjuntoB[i];
            tamanhoUniao++;
        }
    }
    return tamanhoUniao; 
}

int intersessao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoInter[]) {
    int i, j, tamanhoInter = 0;
    for (i = 0; i < tamanho1; i++) {
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                // Verifica se o elemento já existe no conjunto de interseção
                int elementoExiste = 0;
                for (int k = 0; k < tamanhoInter; k++) {
                    if (conjuntoA[i] == conjuntoInter[k]) {
                        elementoExiste = 1;
                        break;
                    }
                }
                // Se o elemento não existe no conjunto de interseção, adiciona
                if (!elementoExiste) {
                    conjuntoInter[tamanhoInter] = conjuntoA[i];
                    tamanhoInter++;
                }
            }
        }
    }
    return tamanhoInter; // Retorna o tamanho do conjunto de interseção
}

int subtracao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoSubtracao[]) {
    int i, j, tamanhoSubtracao = 0;
    for (i = 0; i < tamanho1; i++) {
        int elementoExiste = 0; // Variável para verificar se o elemento existe em B
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                elementoExiste = 1; // Elemento existe em B, não será adicionado à subtração
                break;
            }
        }
        // Se o elemento não existe em B, adiciona ao conjunto de subtração
        if (!elementoExiste) {
            conjuntoSubtracao[tamanhoSubtracao] = conjuntoA[i];
            tamanhoSubtracao++;
        }
    }
    return tamanhoSubtracao; // Retorna o tamanho do conjunto de subtração
}

int diferencaSimetrica(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoDiferencaSimetrica[]) {
    int i, j, tamanhoDiferencaSimetrica = 0;
    // Verificar elementos presentes apenas em A (não em B)
    for (i = 0; i < tamanho1; i++) {
        int elementoExisteEmB = 0; // Variável para verificar se o elemento existe em B
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                elementoExisteEmB = 1; // Elemento existe em B, não será adicionado à diferença simétrica
                break;
            }
        }
        // Se o elemento não existe em B, adiciona ao conjunto de diferença simétrica
        if (!elementoExisteEmB) {
            conjuntoDiferencaSimetrica[tamanhoDiferencaSimetrica] = conjuntoA[i];
            tamanhoDiferencaSimetrica++;
        }
    }
    // Verificar elementos presentes apenas em B (não em A)
    for (i = 0; i < tamanho2; i++) {
        int elementoExisteEmA = 0; // Variável para verificar se o elemento existe em A
        for (j = 0; j < tamanho1; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                elementoExisteEmA = 1; // Elemento existe em A, não será adicionado à diferença simétrica
                break;
            }
        }
        // Se o elemento não existe em A, adiciona ao conjunto de diferença simétrica
        if (!elementoExisteEmA) {
            conjuntoDiferencaSimetrica[tamanhoDiferencaSimetrica] = conjuntoB[i];
            tamanhoDiferencaSimetrica++;
        }
    }
    return tamanhoDiferencaSimetrica; // Retorna o tamanho do conjunto de diferença simétrica
}

void produtoCartesiano(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2) {
    printf("\nProduto Cartesiano (A x B):\n");
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            printf("(%d, %d)\n", conjuntoA[i], conjuntoB[j]);
        }
    }
}

void menu(){
    printf("\n1 - INSERIR OS CONJUNTOS A E B\n");
    printf("\n2 - A U B\n");
    printf("\n3 - A ∩ B\n");
    printf("\n4 - A - B\n");
    printf("\n5 - B - A\n");
    printf("\n6 - A ∆ B\n");
    printf("\n7 - A x B\n");
    printf("\n8 - SAIR\n");
}


int main() {
    SetConsoleOutputCP(65001);
    printf("\n%s\n", inicio);
    int opcao = 0;
    int tamanho1, tamanho2;

    int conjtA[10];
    int conjtB[10];
    int conjtUniao[20]; // tamanho máximo da união
    int tamanhoUniao = 0;
    int conjtIntersecao[10];
    int tamanhoIntersecao = 0;
    int conjtSubtracaoA_B[10]; // tamanho máximo da subtração
    int tamanhoSubtracaoA_B = 0;
    int conjtSubtracaoB_A[10]; // tamanho máximo da subtração
    int tamanhoSubtracaoB_A = 0;
    int conjtDiferencaSimetrica[20]; // tamanho máximo da diferença simétrica
    int tamanhoDiferencaSimetrica = 0;

    do {
        menu();
        printf("\nDigite a opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            tamanho1 = pedirTamanho('A');
            tamanho2 = pedirTamanho('B');
            inserirConjuntos(&conjtA, tamanho1);
            inserirConjuntos(&conjtB, tamanho2);
            printf("\n%s\n", corte);
            break;

        case 2:
            tamanhoUniao = uniao(conjtA, conjtB, tamanho1, tamanho2, conjtUniao);
            printf("\n%s\n", resultado);
            printf("Conjunto de União: ");
            for (int i = 0; i < tamanhoUniao; i++) {
                printf("%d ", conjtUniao[i]);
            }
            printf("\n%s\n", corte);
            break;

        case 3:
            tamanhoIntersecao = intersessao(conjtA, conjtB, tamanho1, tamanho2, conjtIntersecao);
            printf("\n%s\n", resultado);
            printf("Conjunto de Interseção: ");
            for (int i = 0; i < tamanhoIntersecao; i++) {
                printf("%d ", conjtIntersecao[i]);
            }
            printf("\n%s\n", corte);
            break;

        case 4:
            tamanhoSubtracaoA_B = subtracao(conjtA, conjtB, tamanho1, tamanho2, conjtSubtracaoA_B);
            printf("\n%s\n", resultado);
            printf("Resultado da subtração (A - B): ");
            for (int i = 0; i < tamanhoSubtracaoA_B; i++) {
                printf("%d ", conjtSubtracaoA_B[i]);
            }
            printf("\n%s\n", corte);
            break;

        case 5:
            tamanhoSubtracaoB_A = subtracao(conjtB, conjtA, tamanho2, tamanho1, conjtSubtracaoB_A);
            printf("\n%s\n", resultado);
            printf("Resultado da subtração (B - A): ");
            for (int i = 0; i < tamanhoSubtracaoB_A; i++) {
                printf("%d ", conjtSubtracaoB_A[i]);
            }
            printf("\n%s\n", corte);
            break;

        case 6:
            tamanhoDiferencaSimetrica = diferencaSimetrica(conjtA, conjtB, tamanho1, tamanho2, conjtDiferencaSimetrica);
            printf("\n%s\n", resultado);
            printf("Resultado da diferença simétrica (A ∆ B): ");
            for (int i = 0; i < tamanhoDiferencaSimetrica; i++) {
                printf("%d ", conjtDiferencaSimetrica[i]);
            }
            printf("\n%s\n", corte);
            break;

        case 7:
            printf("\n%s\n", resultado);
            produtoCartesiano(conjtA, conjtB, tamanho1, tamanho2);
            printf("\n%s\n", corte);
            break;

        case 8:
            // Não é necessário fazer nada, o loop será encerrado
            break;

        default:
            printf("\nOpção inválida! Digite um número entre 1 e 8.\n");
        }

    } while (opcao != 8);

    return 0;
}