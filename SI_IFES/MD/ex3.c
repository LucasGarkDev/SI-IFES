/*Fazer uma função recursiva que conta o número de ocorrências de um determinado
caracter, caract(char c, char s[]) */
#include <stdio.h>
#include <string.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int string(char *s, int tam,char letra) {
    if (s[tam] == letra){
        if (tam == 0) {
            return 0; 
        } else {
            return 1 + string(s + 1, tam - 1, letra);
        }
    }else{
        return 1 + string(s + 1, tam - 1, letra);
    }
}

int main() {
    int tam;
    char str[50];
    char letra;
    printf("\n%s\n", INICIO);
    printf("Digite a frase: ");
    fgets(str, sizeof(str), stdin);
    printf("Digite o caracter que deseja procurar: ");
    scanf("%c", &letra);
    tam = string(str, strlen(str) - 1, letra); 
    printf("\n%s\n", RESULTADO);
    printf("O tamanho da string e: %d\n", tam);
    return 0;
}
