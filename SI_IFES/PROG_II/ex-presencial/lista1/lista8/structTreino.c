#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


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

void procuraMatricula(Funcionario *vet, int quanti){
    int pesq, i;
    printf("Digite o numero da matricula:");
    scanf("%d", &pesq);
    i = pesquisar(vet,quanti,pesq,1);
    if (i != -1){
        printf("\n%s\n", RESULTADO);
        printf("O funcionario com essa matricula corresponde a....\n");
        printf("Nome: %s\n", vet[i].individuo.nome);
        printf("Matricula: %d\n", vet[i].matricula);
        printf("E-mail: %s\n", vet[i].individuo.email);
        printf("Telefone: %d\n", vet[i].individuo.telefone);
        printf("Salario: %.2f\n", vet[i].salario);
        printf("%s\n", CORTE);
    }else{
        printf("\n%s\n", RESULTADO);
        printf("Nenhum funcionario consta com essa matricula.\n");
        printf("%s\n", CORTE);
    }
}

void procuraNome(Funcionario *vet, int quanti){
    char nome[MAX];
    int i;
    printf("Digite o nome do funcionario: ");
    scanf(" %100[^\n]s", nome);
    i = pesquisar2(vet,quanti,nome,1);
    if (i != -1){
        printf("\n%s\n", RESULTADO);
        printf("O funcionario com esse nome corresponde a....\n");
        printf("Nome: %s\n", vet[i].individuo.nome);
        printf("Matricula: %d\n", vet[i].matricula);
        printf("E-mail: %s\n", vet[i].individuo.email);
        printf("Telefone: %d\n", vet[i].individuo.telefone);
        printf("Salario: %.2f\n", vet[i].salario);
        printf("%s\n", CORTE);
    }else{
        printf("\n%s\n", RESULTADO);
        printf("Nenhum funcionario consta com esse nome.\n");
        printf("%s\n", CORTE);
    }
}

void aumentaSalario(Funcionario *vet, int quanti){
    int matri, i;
    float porcentagem;
    do{
        printf("Digite o numero da matricula do funcionario: ");
        scanf("%d", &matri);
    } while (pesquisar(vet,quanti,matri,1) == -1);
    do{
        printf("Digite a porcentagem de aumento: ");
        scanf("%f", &porcentagem);
    } while (isdigit(porcentagem) == 0);
    i = pesquisar(vet,quanti,matri,1);
    vet[i].salario += ((porcentagem * vet[i].salario)/100); 
    printf("\n%s\n", RESULTADO);
    printf("O salario do funcionario '%s' aumentou para: %.2f\n", vet[i].individuo.nome,vet[i].salario);
    printf("%s\n", CORTE);
}

void maiorSalario(Funcionario *vet, int quanti){
    float maior = 0.0;
    int i, ref;
    for (i = 0; i < quanti; i++){
        if (vet[i].salario >= maior){
            maior = vet[i].salario;
            ref = i;
        }
    }
    printf("\n%s\n", RESULTADO);
    printf("Nome: %s\n", vet[ref].individuo.nome);
    printf("Matricula: %d\n", vet[ref].matricula);
    printf("E-mail: %s\n", vet[ref].individuo.email);
    printf("Telefone: %d\n", vet[ref].individuo.telefone);
    printf("Salario: %.2f\n", vet[ref].salario);
    printf("%s\n", CORTE);
}

void excluir(Funcionario *vet, int *quanti){
    int matri, i, x, armazena;
    printf("Digite o numero da matricula do funcionario: ");
    scanf("%d", &matri);
    x = pesquisar(vet,*quanti,matri,1);
    if ( x != -1){
        for (i = 0; i < *quanti; i++){
            if (i == x){
                armazena = vet[i].matricula;
                vet[i].matricula = vet[i+1].matricula;
                strcpy(vet[i].individuo.nome,vet[i+1].individuo.nome);
                vet[i].salario = vet[i+1].salario;
                vet[i].individuo.telefone= vet[i+1].individuo.telefone;
                strcpy(vet[i].individuo.email,vet[i+1].individuo.email);
            }
        }
        (*quanti)--;
        printf("\n%s\n", RESULTADO);
        printf("Funcionário com a matrícula %d removido com sucesso.\n",armazena);
        printf("\n%s\n", CORTE);
    }else{
        printf("\n%s\n", RESULTADO);
        printf("A matricula não foi encontrada.");
        printf("\n%s\n", CORTE);
    }
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

FILE * abrirArquivo(char * nomeArq, char * modo) {
    FILE * arq;
    arq = fopen( nomeArq, modo );
    if ( arq == NULL) {
        printf("ERRO ao abrir o arquivo.");
        exit(-1);
    }
    return arq;
}

void carregarArquivo(FILE * arquivo, Funcionario * vetor, int *qtde) {
    fread( qtde, sizeof(int), 1, arquivo  );
    fread( vetor, sizeof(Funcionario), *qtde, arquivo  );
}

void gravarArquivo(FILE * arquivo, Funcionario * vetor, int qtde) {
    fwrite( &qtde, sizeof(int), 1, arquivo  );
    fwrite( vetor, sizeof(Funcionario), qtde, arquivo  );
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
    int op, quanti = 0;
    FILE * arquivo;
    Funcionario funcVet[MAX];
    arquivo = abrirArquivo("../arquivos/listaFuncionarios.bin", "rb");
    do{
        op = menu();
        switch (op){
            case 0:
                arquivo = abrirArquivo("../arquivos/listaFuncionarios.bin", "wb");
				gravarArquivo(arquivo,funcVet,quanti);
                fclose(arquivo);
                break;
            
            case 1:
                inserirFuncionario(funcVet,&quanti);
                break;
            
            case 2:
                procuraMatricula(funcVet,quanti);
                break;

            case 3:
                procuraNome(funcVet,quanti);
                break;
            
            case 4:
                aumentaSalario(funcVet,quanti);
                break;
            
            case 5:
                maiorSalario(funcVet,quanti);
                break;
            
            case 6:
                excluir(funcVet,&quanti);
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