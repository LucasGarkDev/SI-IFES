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

int pesquisar(Funcionario *vetor,int quanti, int pesq, int desci){
    int i;
    if (desci == 1){
        for (i = 0; i < quanti; i++){
            if (vetor[i].matricula == pesq){
                return i;
            }
        }
        return -1;
    }else if (desci == 2){
        for (i = 0; i < quanti; i++){
            if (vetor[i].individuo.telefone == pesq){
                return i;
            }
        }
        return -1;
    }else{
        for (i = 0; i < quanti; i++){
            if (vetor[i].salario == pesq){
                return i;
            }
        }
        return -1;
    }    
}

int pesquisar2(Funcionario *vetor, int quanti, char *palavra, int desci){
    int i, aponta;
    if (desci == 1){
        for (i = 0; i < quanti; i++){
            aponta = strcmp(vetor[i].individuo.nome,palavra);
            if ( aponta == 0){
                return i;
            }
        }
        return -1;
    }else{
        for (i = 0; i < quanti; i++){
            aponta = strcmp(vetor[i].individuo.email,palavra);
            if ( aponta == 0){
                return i;
            }
        }
        return -1;
    }
}

void inserirFuncionario(Funcionario *vet, int *quanti){
    printf("\n%s\n", INICIO);
    int matricula;
    char nome[MAX];
    int telefone;
    char email[MAX];
    float salario;
    do{
        printf("Digite o nome do funcionario: ");
        scanf(" %100[^\n]s", nome);
    } while (pesquisar2(vet,*quanti,nome,1) != -1);
    do{
        printf("Digite a matricula do funcionario: ");
        scanf("%d", &matricula);
    } while (pesquisar(vet,*quanti,matricula,1) != -1);
    do{
        printf("Digite o telefone do funcionario: ");
        scanf("%d", &telefone);
    } while (pesquisar(vet,*quanti,telefone,2) != -1);
    do{
        printf("Digite o e-mail do funcionario: ");
        scanf(" %100[^\n]s", email);
    } while (pesquisar2(vet,*quanti,email,2) != -1);
    do{
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);
    } while (pesquisar(vet,*quanti,salario,0) != -1);
    vet[*quanti].matricula = matricula;
    vet[*quanti].individuo.telefone = telefone;
    vet[*quanti].salario = salario;
    strcpy(vet[*quanti].individuo.nome, nome);
    strcpy(vet[*quanti].individuo.email, email);
    (*quanti)++;
    printf("\n%s\n", CORTE);
}

void listar(Funcionario * vetor, int qtde) {
    int i;
    printf("\n%s\n", RESULTADO);
    printf("Matricula|Nome                   |telefone|e-mail              |Salario   |\n");
    for( i=0; i < qtde; i++) {
        printf("%9d|%-23s|%8d|%-20s|%10.2f|\n", vetor[i].matricula, vetor[i].individuo.nome, vetor[i].individuo.telefone, vetor[i].individuo.email,vetor[i].salario  );
    }
    printf("\n%s\n", CORTE);
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
	printf("0 - Sair\n");
	do {
		printf("Escolha sua opção: ");
		scanf(" %d", &op);
	} while(op < 0 || op > 7);
	return op;
}

int main(){
    SetConsoleOutputCP(65001);
    int op, quanti = 0;
    Funcionario funcVet[MAX];
    do{
        op = menu();
        switch (op){
            case 0:
                /* code */
                break;
            
            case 1:
                inserirFuncionario(funcVet,&quanti);
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
                listar(funcVet,quanti);
                break;
            
            default:
                break;
            }
    } while (op != 0);
    return 0;
}