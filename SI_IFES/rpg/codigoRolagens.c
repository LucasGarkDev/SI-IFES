#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct TipoAtaque {
    char nome[50];
    int num_ataques;
    int num_rolagens;
    int lados_dado;
    int mod_habilidade;
};

struct Monstro {
    char nome[50];
    int quantidade;
    int num_tipos_ataque;
    struct TipoAtaque tipos_ataque[5];
};

int rolarD20() {
    return rand() % 20 + 1;
}

int rolarDado(int num_rolagens, int lados_dado) {
    int resultado = 0;
    for (int i = 0; i < num_rolagens; i++) {
        resultado += rand() % lados_dado + 1;
    }
    return resultado;
}

int main() {
    srand(time(NULL));
    printf("Bem-vindo ao RPG Monster Roller!\n");

    int num_monstros;
    printf("Quantos monstros deseja adicionar? ");
    scanf("%d", &num_monstros);

    struct Monstro monstros[10];

    for (int num = 0; num < num_monstros; num++) {
        struct Monstro monstro;
        printf("\nMonstro #%d\n", num + 1);
        printf("Nome do monstro: ");
        scanf("%s", monstro.nome);
        printf("Quantidade de %s: ", monstro.nome);
        scanf("%d", &monstro.quantidade);

        printf("Quantos tipos de ataque diferentes esse monstro tem? ");
        scanf("%d", &monstro.num_tipos_ataque);

        for (int i = 0; i < monstro.num_tipos_ataque; i++) {
            printf("Digite o nome do Tipo de Ataque #%d: ", i + 1);
            scanf("%s", monstro.tipos_ataque[i].nome);
            printf("Digite o numero de ataques para este tipo: ");
            scanf("%d", &monstro.tipos_ataque[i].num_ataques);
            printf("Digite o dado de dano para este tipo (no formato XdY): ");
            scanf("%dd%d", &monstro.tipos_ataque[i].num_rolagens, &monstro.tipos_ataque[i].lados_dado);
            printf("Digite o modificador de habilidade para este tipo: ");
            scanf("%d", &monstro.tipos_ataque[i].mod_habilidade);
        }

        monstros[num] = monstro;
    }

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1 - Iniciar rodada\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (int num = 0; num < num_monstros; num++) {
                    struct Monstro monstro = monstros[num];
                    printf("\n%s:\n", monstro.nome);
                    for (int i = 0; i < monstro.num_tipos_ataque; i++) {
                        struct TipoAtaque tipo_ataque = monstro.tipos_ataque[i];
                        printf("Tipo de Ataque: %s\n", tipo_ataque.nome);
                        printf("Quantidade de ataques: %d\n", tipo_ataque.num_ataques);
                        printf("Resultado das rolagens:\n");

                        for (int j = 0; j < monstro.quantidade; j++) {
                            int ataque = rolarD20() + tipo_ataque.mod_habilidade;
                            printf("Ataque #%d - Monstro #%d (D20 para acerto): %d\n", i + 1, j + 1, ataque);

                            for (int k = 0; k < tipo_ataque.num_ataques; k++) {
                                int resultado_dano = rolarDado(tipo_ataque.num_rolagens, tipo_ataque.lados_dado) + tipo_ataque.mod_habilidade;
                                printf("Ataque #%d - Monstro #%d - Rolagem de Dano #%d: %d\n", i + 1, j + 1, k + 1, resultado_dano);
                            }
                        }
                    }
                }
                break;

            case 2:
                printf("Saindo do RPG Monster Roller. Ate a proxima!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}

