#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

struct Pessoa{
    char nome[101];
    int telefone;
    char email[101];
};
typedef struct Pessoa Pessoa;

struct Funcionario{
    int matricula;
    float salario;
    Pessoa individuo;
};
typedef struct Funcionario Funcionario;

int pesquisar(int *vetor, int quanti, int pesq){
    int i;
    for (i = 0; i < quanti; i++){
        if (vetor[i] == pesq){
            return i;
        } 
    }
    return -1;
}


void inserirFunc(Funcionario *ind,int *quanti){
    int i;
    printf("Digite o nome do funcionario: ");
    scanf(" %100[^\n]s", ind->individuo.nome);
    printf("Digite o telefone do funcionario: ");
    scanf("%d", ind->individuo.telefone);
    printf("Digite o e-mail do funcionario: ");
    scanf(" %100[^\n]s", ind->individuo.email);
    printf("Digite a matricula do funcionario: ");
    scanf("%d", ind->matricula);
    printf("Digite o salario do funcionario: ");
    scanf("%f", ind->salario);
    *quanti++;
}

void procuraMatricula(char *resposta, Funcionario vetor,int pesq, int quanti){
    int ret, i;
    for (i = 0; i < quanti; i++){
        ret = pesquisar(vetor.matricula,quanti,pesq);
        if (ret != -1){
            strcpy(resposta,vetor.individuo.nome);
            printf("Para essa matricula, consta no sistema o funcionario: %s", resposta);
        }
    } 
}

void procuraNome(Funcionario vetor,int pesq, int quanti){
    int ret, i, resposta;
    for (i = 0; i < quanti; i++){
        ret = pesquisar(vetor.individuo.nome,quanti,pesq);
        if (ret != -1){
            resposta = vetor.matricula[i];
            printf("Para esse nome, consta no sistema a matricula: %d", resposta);
        }
    }
}

int menu() {
	int op;
	system("@cls||clear");  // LIMPA A TELA
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

int main() {
	int op;
    Funcionario vetor[MAX];
    int quanti = 0;
    int res;
    char resposta[MAX];
	do {
		op = menu();
		switch ( op ) {
			case 0:
				// SAIR. NÃO PRECISA FAZER NADA
				break;
			case 1:
				inserirFunc(vetor,&quanti);
				break;
			case 2:
                printf("Digite o numero da matricula: ");
                scanf("%d", &res);
				procurarMatricula(resposta,vetor,res,quanti);
				break;
			case 3:
				// PESQUISAR POR NOME
				break;
			case 4:
				// ATUALIZAR
				break;
			case 5:
				// MAIOR
				break;
			case 6:
				// EXCLUIR
				break;
			case 7:
				// LISTAR
				break;
			default:
				printf ("\n\nOpçãoo inválida!\n\n");
		}
	} while (op != 0);
	
	return 0;
}
	
	return 0;
}
