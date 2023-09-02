#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Estrutura para representar um tipo de ataque
struct TipoAtaque {
    char nome[50];
    int num_ataques;
    int dado_dano; // Armazena o número de lados do dado de dano
    int mod_habilidade; // Modificador de habilidade para este tipo de ataque
};

// Estrutura para representar um monstro
struct Monstro {
    char nome[50];
    int quantidade;
    int num_tipos_ataque;
    struct TipoAtaque tipos_ataque[5]; // Supomos até 5 tipos de ataques por monstro
};

// Função para rolar um dado com um número específico de lados
int rolarDado(int lados) {
    return rand() % lados + 1;
}

// Função para simular os ataques de um monstro
void simularAtaques(struct Monstro monstro, int monstro_num) {
    printf("Simulando ataques do monstro %s (Monstro #%d):\n", monstro.nome, monstro_num + 1);
    
    for (int i = 0; i < monstro.quantidade; i++) {
        int total_dano = 0;
        for (int j = 0; j < monstro.num_tipos_ataque; j++) {
            printf("Tipo de Ataque #%d: %s\n", j + 1, monstro.tipos_ataque[j].nome);
            for (int k = 0; k < monstro.tipos_ataque[j].num_ataques; k++) {
                int rolagem = rolarDado(20); // Rola um dado de 20 lados
                int dano = rolarDado(monstro.tipos_ataque[j].dado_dano); // Rola o dado de dano
                // Adiciona o modificador de habilidade específico para este tipo de ataque
                dano += monstro.tipos_ataque[j].mod_habilidade;
                total_dano += dano;
                printf("Ataque %d: Rolagem = %d, Dano = %d\n", k + 1, rolagem, dano);
            }
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
                    printf("Digite o numero de tipos de ataques do monstro: ");
                    scanf("%d", &monstros[num_monstros].num_tipos_ataque);
                    
                    for (int i = 0; i < monstros[num_monstros].num_tipos_ataque; i++) {
                        printf("Digite o nome do Tipo de Ataque #%d: ", i + 1);
                        scanf("%s", monstros[num_monstros].tipos_ataque[i].nome);
                        printf("Digite o numero de ataques para este tipo: ");
                        scanf("%d", &monstros[num_monstros].tipos_ataque[i].num_ataques);
                        printf("Digite o numero de lados do dado de dano para este tipo: ");
                        scanf("%d", &monstros[num_monstros].tipos_ataque[i].dado_dano);
                        printf("Digite o modificador de habilidade para este tipo: ");
                        scanf("%d", &monstros[num_monstros].tipos_ataque[i].mod_habilidade);
                    }
                    
                    num_monstros++;
                } else {
                    printf("Limite de monstros atingido (max 10).\n");
                }
                break;
            case 2:
                if (num_monstros > 0) {
                    for (int i = 0; i < num_monstros; i++) {
                        simularAtaques(monstros[i], i);
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
