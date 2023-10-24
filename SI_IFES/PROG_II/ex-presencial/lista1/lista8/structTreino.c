#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 101

struct Pessoa{
    char nome[MAX];
    int telefone;
    char email[MAX];
};
typedef struct Pessoa Pessoa;

struct Funcionario{
    int matricula;
    float salario;
    Pessoa individuo;
};
typedef struct Funcionario Funcionario;

int menu() {
	int op;
// 	system("@cls||clear");  // LIMPA A TELA
	printf("\n\nSISTEMA FOLHA DE PAGAMENTO\n\n");
	printf("1 - Inserir funcionario\n");
	printf("2 - Pesquisar por matricula\n");
	printf("3 - Pesquisar por nome\n");
	printf("4 - Aumentar salario\n");
	printf("5 - Maior salario\n");
	printf("6 - Excluir\n");
	printf("7 - Listar\n");
	printf("0 - Sair\n");
	do {
		printf("Escolha sua opção: ");
		scanf(" %d", &op);
	} while(op < 0 || op > 7);
	return op;
}

int main(){
    SetConsoleOutputCP(65001);
    int op;
    do{
        op = menu();
        switch (op){
            case 0:
                /* code */
                break;
            
            case 1:
                /* code */
                break;
            
            case 2:
                /* code */
                break;

            case 3:
                /* code */
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
            
            default:
                break;
            }
    } while (op != 0);
    return 0;
}