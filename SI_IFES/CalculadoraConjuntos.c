#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int pedirTamanho(char conjunto) {
    int num;
    do {
        printf("Digite o tamanho do conjunto %c: ", conjunto);
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void inserirConjunto(int conjunto[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &conjunto[i]);
    }
}

int uniao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoUniao[]) {
    int i, j, tamanhoUniao;
    
    for (i = 0; i < tamanho1; i++) {
        conjuntoUniao[i] = conjuntoA[i];
    }
    tamanhoUniao = tamanho1; 
    
    for (i = 0; i < tamanho2; i++) {
        int elementoExiste = 0; 
        
        for (j = 0; j < tamanhoUniao; j++) {
            if (conjuntoUniao[j] == conjuntoB[i]) {
                elementoExiste = 1;
                break;
            }
        }
        
        if (!elementoExiste) {
            conjuntoUniao[tamanhoUniao] = conjuntoB[i];
            tamanhoUniao++;
        }
    }
    return tamanhoUniao; 
}

int intersessao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoInter[]) {
    int i, j, k, tamanhoInter = 0;
    for (i = 0; i < tamanho1; i++) {
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                
                int elementoExiste = 0;
                for (k = 0; k < tamanhoInter; k++) {
                    if (conjuntoA[i] == conjuntoInter[k]) {
                        elementoExiste = 1;
                        break;
                    }
                }
                
                if (!elementoExiste) {
                    conjuntoInter[tamanhoInter] = conjuntoA[i];
                    tamanhoInter++;
                }
            }
        }
    }
    return tamanhoInter; 
}

int subtracao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoSubtracao[]) {
    int i, j, tamanhoSubtracao = 0;
    for (i = 0; i < tamanho1; i++) {
        int elementoExiste = 0; 
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                elementoExiste = 1; 
                break;
            }
        }
        
        if (!elementoExiste) {
            conjuntoSubtracao[tamanhoSubtracao] = conjuntoA[i];
            tamanhoSubtracao++;
        }
    }
    return tamanhoSubtracao; 
}

int diferencaSimetrica(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoDiferencaSimetrica[]) {
    int i, j, tamanhoDiferencaSimetrica = 0;
    
    for (i = 0; i < tamanho1; i++) {
        int elementoExisteEmB = 0; 
        for (j = 0; j < tamanho2; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                elementoExisteEmB = 1; 
                break;
            }
        }
       
        if (!elementoExisteEmB) {
            conjuntoDiferencaSimetrica[tamanhoDiferencaSimetrica] = conjuntoA[i];
            tamanhoDiferencaSimetrica++;
        }
    }
    
    for (i = 0; i < tamanho2; i++) {
        int elementoExisteEmA = 0; 
        for (j = 0; j < tamanho1; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                elementoExisteEmA = 1; 
                break;
            }
        }
        
        if (!elementoExisteEmA) {
            conjuntoDiferencaSimetrica[tamanhoDiferencaSimetrica] = conjuntoB[i];
            tamanhoDiferencaSimetrica++;
        }
    }
    return tamanhoDiferencaSimetrica; 
}

void produtoCartesiano(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2) {
    printf("\nProduto Cartesiano (A x B):\n");
    int i, j;
    for(i = 0; i < tamanho1; i++) {
        for(j = 0; j < tamanho2; j++) {
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
    int conjtA[10], conjtB[10], conjtUniao[20], conjtIntersecao[10], conjtSubtracaoA_B[10]; 
    int tamanhoUniao = 0;
    int tamanhoIntersecao = 0;
    int tamanhoSubtracaoA_B = 0;
    int conjtSubtracaoB_A[10], conjtDiferencaSimetrica[20]; 
    int tamanhoSubtracaoB_A = 0;
    int tamanhoDiferencaSimetrica = 0;
    int i;
    do {
        menu();
        printf("\nDigite a opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                tamanho1 = pedirTamanho('A');
                tamanho2 = pedirTamanho('B');
                inserirConjunto(conjtA, tamanho1);
                inserirConjunto(conjtB, tamanho2);
                printf("\n%s\n", corte);
                break;

            case 2:
                tamanhoUniao = uniao(conjtA, conjtB, tamanho1, tamanho2, conjtUniao);
                printf("\n%s\n", resultado);
                printf("Conjunto de União: ");
                for (i = 0; i < tamanhoUniao; i++) {
                    printf("%d ", conjtUniao[i]);
                }
                printf("\n%s\n", corte);
                break;

            case 3:
                tamanhoIntersecao = intersessao(conjtA, conjtB, tamanho1, tamanho2, conjtIntersecao);
                printf("\n%s\n", resultado);
                printf("Conjunto de Interseção: ");
                for (i = 0; i < tamanhoIntersecao; i++) {
                    printf("%d ", conjtIntersecao[i]);
                }
                printf("\n%s\n", corte);
                break;

            case 4:
                tamanhoSubtracaoA_B = subtracao(conjtA, conjtB, tamanho1, tamanho2, conjtSubtracaoA_B);
                printf("\n%s\n", resultado);
                printf("Resultado da subtração (A - B): ");
                for (i = 0; i < tamanhoSubtracaoA_B; i++) {
                    printf("%d ", conjtSubtracaoA_B[i]);
                }
                printf("\n%s\n", corte);
                break;

            case 5:
                tamanhoSubtracaoB_A = subtracao(conjtB, conjtA, tamanho2, tamanho1, conjtSubtracaoB_A);
                printf("\n%s\n", resultado);
                printf("Resultado da subtração (B - A): ");
                for (i = 0; i < tamanhoSubtracaoB_A; i++) {
                    printf("%d ", conjtSubtracaoB_A[i]);
                }
                printf("\n%s\n", corte);
                break;

            case 6:
                tamanhoDiferencaSimetrica = diferencaSimetrica(conjtA, conjtB, tamanho1, tamanho2, conjtDiferencaSimetrica);
                printf("\n%s\n", resultado);
                printf("Resultado da diferença simétrica (A ∆ B): ");
                for (i = 0; i < tamanhoDiferencaSimetrica; i++) {
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
                break;

            default:
                printf("\nOpção inválida! Digite um número entre 1 e 8.\n");
            }
    } while (opcao != 8);
    return 0;
}
