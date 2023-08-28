#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"


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

int intersessao(int conjuntoA[], int conjuntoB[], int tamanho1, int tamanho2, int conjuntoInter[]){
    int i, j, tamanhoInter;
    for (i = 0; i < tamanho1; i++){
        conjuntoInter[i] = conjuntoA[i];
    }
    tamanhoInter = tamanho1;
    
    
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


int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", inicio);
    int opcao = 0;
    int tamanho1, tamanho2;
    do{
        menu();
        printf("\nDigite a opção: ");
        scanf("%d", &opcao);
        switch (opcao){
        case 1:
            tamanho1 = pedirTamanho('A');
            int conjtA[tamanho1];
            tamanho2 = pedirTamanho('B');
            int conjtB[tamanho2];
            inserirConjuntos(&conjtA, &tamanho1);
            inserirConjuntos(&conjtB, &tamanho2);
            break;
        
        case 2:
            int conjtUniao[10];
            int tamanhoUniao;
            tamanhoUniao = uniao(conjtA,conjtB,tamanho1,tamanho2,conjtUniao);
            printf("\n%s\n", resultado);
            printf("Conjunto de União: ");
            for (int i = 0; i < tamanhoUniao; i++) {
                printf("%d ", conjtUniao[i]);
            }
            break;
        
        case 3:
            int conjtIntersessao[10];

            break;
        
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        
        case 6:
            /* code */
            break;
        
        case 7:
            /* code */
            break;
        
        case 8:
            /* code */
            break;
        }
        
        
        printf("\n%s\n", corte);
    } while ((opcao != 8));
    
    
    return 0;
}