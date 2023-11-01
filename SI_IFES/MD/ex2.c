/*Escrever uma função recursiva que retorna o
tamanho de um string, tamstring(char s[]) */
#include <stdio.h>
#include <string.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int string(char *s, int tam) {
    if (tam == 0) {
        return 0; 
    } else {
        return 1 + string(s + 1, tam - 1);
    }
}

int main() {
    int tam;
    char str[50];
    printf("\n%s\n", INICIO);
    printf("Digite a frase: ");
    fgets(str, sizeof(str), stdin);
    tam = string(str, strlen(str) - 1); 
    printf("\n%s\n", RESULTADO);
    printf("O tamanho da string e: %d\n", tam);
    return 0;
}
