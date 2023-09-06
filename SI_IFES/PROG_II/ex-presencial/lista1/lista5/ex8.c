/* Agora você foi contratado por uma renomada casa de show de 
Colatina para fazer o programa de venda de ingressos para 10 
shows. Cada show terá uma quantidade máxima de ingressos, 
diferentes um do outro. A quantidade máxima de cada show é 
armazenada em um vetor (maxShow), respectivamente para cada 
show (use um índice para cada show). O vetor “vendas” 
armazena a quantidade de ingressos vendidos para cada show,
respectivamente. Esse vetor começa com zero para todos os 
shows. Quando uma venda é realizada em um show, a quantidade
na posição correspondente nesse vetor é somada. Você deverá
programar as 3 funções que estão faltando: 
- showsDisponíveis: imprimir na tela somente os shows 
que ainda tem vaga, ou seja, cuja venda é menor que o 
máximo para cada show. 
- realizarVenda: pedir o número do show e a quantidade de 
ingressos. Verificar se existem
vagas para este show e somar a quantidade vendida ao vetor
de vendas. Senão tiver vagas, imprimir uma mensagem de erro.
- imprimir: imprimir somente os shows que tiveram vendas.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 1000

void adicionarVenda(int vetor1[], int vetor2[], int pesq, int qtde) {
    vetor1[pesq] += qtde; 
    vetor2[pesq] -= qtde; 
}

void showsDisponiveis(int vendas[],int maxShow[],int tamanho){
    int i, res;
    printf("\n%s\n", RESULTADO);
    for (i = 0; i < tamanho; i++){
        if (vendas[i] < maxShow[i]){
            res = maxShow[i] - vendas[i];
            printf("Para o show %d a quantidade de ingressos e: %d\n", i+1, res);
        }
    }
    printf("\n%s\n", CORTE);
}

char desejaComprar(){
    char letra;
    do{
        printf("Voce deseja ir a alguns desses show's(S/N)? ");
        scanf(" %c", &letra);
    } while ((toupper(letra) != 'S')&&(toupper(letra) != 'N'));
    return toupper(letra);
}

void realizarVenda(int vendas[], int maxShow[], int tamanho) {
    int numShow, qtde;
    char letra;
    letra = desejaComprar();
    if (letra == 'S') {
        printf("Qual é o número do show que você deseja ir: ");
        scanf("%d", &numShow);
        printf("Digite a quantidade de ingressos que você deseja: ");
        scanf("%d", &qtde);
        if (numShow >= 1 && numShow <= tamanho) { // Verifica se o número do show é válido
            if (qtde > 0 && qtde <= maxShow[numShow - 1] - vendas[numShow - 1]) {
                adicionarVenda(vendas, maxShow, numShow - 1, qtde);
                printf("\n%s\n", RESULTADO);
                printf("Você está marcado para ir no show %d\n", numShow);
                printf("\n%s\n", CORTE);
            } else {
                printf("Não há ingressos disponíveis ou quantidade inválida.\n");
                printf("\n%s\n", CORTE);
            }
        } else {
            printf("Número do show inválido.\n");
            printf("\n%s\n", CORTE);
        }
    }
}

void imprimir(int vendas[],int tamanho){
    int i;
    printf("\n%s\n", RESULTADO);
    for (i = 0; i < tamanho; i++){
        if (vendas[i] > 0){
            printf("O show %d teve %d vendas\n", i+1,vendas[i]);
        }
    }
    printf("\n%s\n", CORTE);
}

int main() { 
    SetConsoleOutputCP(65001);
    int maxShow[10] = {100,110,120,120,130,130,140,140,150,150}; 
    int vendas[10] = {0,0,0,0,0,0,0,0,0,0}; 
    int op, tamanho = 10;
    do{
        printf("\n%s\n", INICIO);
        printf("\n\t1 - Vender ingresso"); 
        printf("\n\t2 - Listar vendidos");       
        printf("\n\t0 - Sair");       
        printf("\n\tSua opção: ");       
        scanf("%d", &op); 
        switch (op){
        case 0:
            break;
        
        case 1:
            showsDisponiveis(vendas, maxShow, tamanho);                   
            realizarVenda(vendas, maxShow, tamanho);
            break;
        
        case 2:
            imprimir(vendas, tamanho);
            break;
        
        default:
            printf("\n\n\tOpção inválida!\n");
            printf("\n%s\n", CORTE);
            break;
        }
    } while (op != 0);
}