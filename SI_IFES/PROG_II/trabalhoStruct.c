#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
#define MAX 101

struct Pessoa {
    char nome[101];
    int telefone;
    char email[101];
};
typedef struct Pessoa Pessoa;

struct Funcionario {
    int matricula;
    float salario;
    Pessoa individuo;
};
typedef struct Funcionario Funcionario;

int pesquisar(Funcionario *vetor, int quanti, int pesq) {
    int i;
    for (i = 0; i < quanti; i++) {
        if (vetor[i].matricula == pesq) {
            return i;
        }
    }
    return -1;
}

int pesquisar2(Funcionario *vetor, int quanti, float pesq) {
    int i;
    for (i = 0; i < quanti; i++) {
        if (vetor[i].salario == pesq) {
            return i;
        }
    }
    return -1;
}

void remover(Funcionario *vetor, int *qtde, int pos) {
    int i;
    for (i = pos; i < *qtde - 1; i++) {
        vetor[i] = vetor[i + 1];
    }
    (*qtde)--;
}

void inserirFunc(Funcionario *vetor, int *quanti) {
    printf("\n%s\n", INICIO);
    char nome[101];
    int telefone;
    char email[101];
    int matricula;
    float salario;
    do {
        printf("Digite o nome do funcionário: ");
        scanf(" %100[^\n]s", nome);
    } while (pesquisar(vetor, *quanti, matricula) != -1);
    do {
        printf("Digite o telefone do funcionário: ");
        scanf("%d", &telefone);
    } while (pesquisar(vetor, *quanti, matricula) != -1);
    do {
        printf("Digite o e-mail do funcionário: ");
        scanf(" %100[^\n]s", email);
    } while (pesquisar(vetor, *quanti, matricula) != -1);
    do {
        printf("Digite a matrícula do funcionário: ");
        scanf("%d", &matricula);
    } while (pesquisar(vetor, *quanti, matricula) != -1);
    do {
        printf("Digite o salário do funcionário: ");
        scanf("%f", &salario);
    } while (pesquisar(vetor, *quanti, matricula) != -1);
    strcpy(vetor[*quanti].individuo.nome, nome);
    vetor[*quanti].individuo.telefone = telefone;
    strcpy(vetor[*quanti].individuo.email, email);
    vetor[*quanti].matricula = matricula;
    vetor[*quanti].salario = salario;
    (*quanti)++;
    printf("\n%s\n", CORTE);
}

void procuraMatricula(char *resposta, Funcionario *vetor, int pesq, int quanti) {
    int i;
    for (i = 0; i < quanti; i++) {
        if (vetor[i].matricula == pesq) {
            strcpy(resposta, vetor[i].individuo.nome);
            printf("\n%s\n", RESULTADO);
            printf("Para essa matricula, consta no sistema o funcionario: %s", resposta);
            printf("\n%s\n", CORTE);
        }
    }
}

void procurarNome(Funcionario *vetor, char pesq[], int quanti) {
    int i;
    for (i = 0; i < quanti; i++) {
        if (strcmp(vetor[i].individuo.nome, pesq) == 0) {
            printf("\n%s\n", RESULTADO);
            printf("Para esse nome, consta no sistema o funcionário:\n");
            printf("Nome: %s\n", vetor[i].individuo.nome);
            printf("Telefone: %d\n", vetor[i].individuo.telefone);
            printf("E-mail: %s\n", vetor[i].individuo.email);
            printf("Matrícula: %d\n", vetor[i].matricula);
            printf("Salário: %.2f\n", vetor[i].salario);
            printf("\n%s\n", CORTE);
        }
    }
}

void aumentaSalario(Funcionario *vetor, int quanti, int matricula, float porcentagem){
	int localMatricula = pesquisar(vetor,quanti,matricula);
	int i;
	for (i = 0; i < quanti; i++){
		if (i == localMatricula){
			vetor[i].salario += (vetor[i].salario * (porcentagem/100));  
		}
	}
	printf("\n%s\n", RESULTADO);
	printf("O salario do individuo: %s\n", vetor[i].individuo.nome);
	printf("Foi reajustado para: %.2f",vetor[i].salario);
	printf("\n%s\n", CORTE);
}

void maiorSalario(Funcionario *vetor, int quanti){
	int i, referencia;
	float maior = 0.0;
	for (i = 0; i < quanti; i++){
		if (vetor[i].salario >= maior){
			maior = vetor[i].salario;
		}
	}
	referencia = pesquisar2(vetor,quanti,maior);
	printf("\n%s\n", RESULTADO);
	printf("Nome: %s\n", vetor[referencia].individuo.nome);
	printf("Telefone: %d\n", vetor[referencia].individuo.telefone);
    printf("E-mail: %s\n", vetor[referencia].individuo.email);
    printf("Matrícula: %d\n", vetor[referencia].matricula);
    printf("Salário: %.2f\n", vetor[referencia].salario);
	printf("\n%s\n", CORTE);
}

void listar(Funcionario *vetor,int quanti){
	int i;
	printf("\n%s\n", RESULTADO);
	for (i = 0; i < quanti; i++){
		printf("Matrícula: %d\n", vetor[i].matricula);
		printf("Nome: %s\n", vetor[i].individuo.nome);
        printf("Telefone: %d\n", vetor[i].individuo.telefone);
        printf("E-mail: %s\n", vetor[i].individuo.email);
        printf("Salário: %.2f\n", vetor[i].salario);
		printf("\n%s\n", CORTE);
	}
}


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
	printf("8 - S2\n");
	printf("0 - Sair\n");
	do {
		printf("Escolha sua opção: ");
		scanf(" %d", &op);
	} while(op < 0 || op > 8);
	return op;
	
}

int main() {
    int op;
    Funcionario vetor[MAX];
    int quanti = 0;
    int res;
	float porce;
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
				procuraMatricula(resposta,vetor,res,quanti);
				break;
			case 3:
				printf("Digite o nome do funcionario: ");
                scanf(" %100[^\n]s", resposta);
				procurarNome(vetor,resposta,quanti);
				break;
			case 4:
				printf("Diga o numero da matricula: ");
				scanf("%d", &res);
				printf("Diga a porcentagem de aumento: ");
				scanf("%f", &porce);
				aumentaSalario(vetor,quanti,res,porce);
				break;
			case 5:
				maiorSalario(vetor,quanti);
				break;
			case 6:
				printf("Diga o numero da matricula que deseja remover: ");
				scanf("%d", &res);
				remover(vetor,&quanti,res);
				break;
			case 7:
				listar(vetor,quanti);
				break;
			default:
				printf ("\n\nOpção inválida!\n\n");
		}
	} while (op != 0);
	return 0;
}

