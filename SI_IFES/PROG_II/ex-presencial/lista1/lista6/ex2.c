/*Ler uma string e imprimir se a mesma é ou não palíndrome. 
Uma palavra é palíndrome se lendo de frente para trás ou de trás para 
frente temos exatamente a mesma string.     
Exemplos: “mutum” é palíndrome.        
“socorram me subi no onibus em marrocos” é palíndrome.     
Nesse caso deve-se ignorar os espaços em branco. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int pedirQtde() {
    int num;
    do {
        printf("Digite a quantidade de espaços no vetor: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void limparBuffer() {
    int ch;
    do {
        ch = getchar();
    } while (ch != EOF && ch != '\n');
}

int ehPalindromo(const char *str) {
    int tamanho = strlen(str);
    for (int i = 0, j = tamanho - 1; i < j; i++, j--) {
        // Ignorar espaços em branco
        while (i < j && isspace((unsigned char)str[i])) {
            i++;
        }
        while (i < j && isspace((unsigned char)str[j])) {
            j--;
        }

        // Comparar os caracteres, ignorando maiúsculas e minúsculas
        if (tolower((unsigned char)str[i]) != tolower((unsigned char)str[j])) {
            return 0; // Não é um palíndromo
        }
    }
    return 1; // É um palíndromo
}

int main() {
    printf("\n%s\n", INICIO);

    int quanti = pedirQtde();
    limparBuffer();

    char *str = (char *)malloc(quanti * sizeof(char));

    printf("Informe a palavra: ");
    fgets(str, quanti, stdin);
    limparBuffer();

    if (ehPalindromo(str)) {
        printf("\n%s\n", RESULTADO);
        printf("A palavra: %s é um palíndromo", str);
        printf("\n%s\n", CORTE);
    } else {
        printf("\n%s\n", RESULTADO);
        printf("A palavra: %s não é um palíndromo", str);
        printf("\n%s\n", CORTE);
    }

    free(str);

    return 0;
}

