/*Implemente a função contCaractere, que dado uma string e um caractere, 
determina quantas vezes o caractere aparece na string. */

#include <stdio.h>
#include <string.h>
#define TAM 50

char pedirCaracter(){
    char letra;
    printf("Digite o caracter que deseja pesquisar: ");
    scanf("%c", &letra);
    return letra;
}

int main() {
    char str[50] = "Exemplo de string para teste";
    char * pch;	// Ponteiro para char
    int cont = 0;
    char pesq = pedirCaracter;
    printf ("Procurando o caractere '%c' na string %s\n",pesq, str);
    pch = strchr(str,pesq);
    while ( pch != NULL)
    {
        printf ("encontrado na posição %d\n", pch - str);  
        pch = strchr(pch+1, pesq);
        cont++;
              
    }
    printf("O numero de letras %c sao: %d",pesq, cont);

}
