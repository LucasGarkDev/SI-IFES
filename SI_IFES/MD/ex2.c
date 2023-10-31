/*Escrever uma função recursiva que retorna o
tamanho de um string, tamstring(char s[]) */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"

int string(char *s, int tam){
    if (tam == 0){
        return tam;
    }else{
        return tam*string(s,tam-1);
    }
}

int main(){
    int tam;
    char str[50];
    scanf("%49[^\n]s", str);
    printf("\n%s\n", RESULTADO);
    //local de chamada
    printf("O tamanho da string e: %d", tam);
    return 0;
}