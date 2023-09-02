#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Estrutura para representar um monstro
struct Monstro {
    char nome[50];
    int quantidade;
    int num_ataques;
    int mod_habilidade;
};

// Função para rolar um dado com um número específico de lados
int rolarDado(int lados) {
    return rand() % lados + 1;
}

// Função para simular os ataques de um monstro
void simularAtaques(struct Monstro monstro) {
    printf("Simulando ataques do monstro %s:\n", monstro.nome);
    
    for (int i = 0; i < monstro.quantidade; i++) {
        int total_dano = 0;
        for (int j = 0; j < monstro.num_ataques; j++) {
            int rolagem = rolarDado(20); // Rola um dado de 20 lados
            int dano = rolagem + monstro.mod_habilidade;
            total_dano += dano;
            printf("Ataque %d: Rolagem = %d, Dano = %d\n", j + 1, rolagem, dano);
        }
        printf("Dano total causado por este monstro: %d\n", total_dano);
    }
    printf("\n");
}

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    
    int opcao;
    struct Monstro monstros[10];
    int num_monstros = 0;
    
    do {
        printf("Menu:\n");
        printf("1 - Adicionar monstro\n");
        printf("2 - Iniciar rodada\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                if (num_monstros < 10) {
                    printf("Digite o nome do monstro: ");
                    scanf("%s", monstros[num_monstros].nome);
                    printf("Digite a quantidade de monstros: ");
                    scanf("%d", &monstros[num_monstros].quantidade);
                    printf("Digite o numero de ataques do monstro: ");
                    scanf("%d", &monstros[num_monstros].num_ataques);
                    printf("Digite o modificador de habilidade do monstro: ");
                    scanf("%d", &monstros[num_monstros].mod_habilidade);
                    num_monstros++;
                } else {
                    printf("Limite de monstros atingido (max 10).\n");
                }
                break;
            case 2:
                if (num_monstros > 0) {
                    for (int i = 0; i < num_monstros; i++) {
                        simularAtaques(monstros[i]);
                    }
                } else {
                    printf("Nenhum monstro registrado.\n");
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);
    
    return 0;
}