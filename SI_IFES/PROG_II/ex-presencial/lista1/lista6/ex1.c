/*Implemente  manualmente  a função  strlen, ou seja, 
uma função que conta a quantidade de caracteres de uma 
string (obviamente não é permitido o uso da função strlen 
da biblioteca <string.h>*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 21

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de espaços no vetor: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void limparBuffer(){
    int ch;
    do{
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

int contagem(char *string, int quanti){
    char vetor[quanti];
    int i, cont = 0;
    for (i = 0; i < quanti; i++){
        vetor[i] = toupper(string[i]);
        if (vetor[i] != '\n' && vetor[i] != '\0' && vetor[i] != ' '){
            cont++;
        }
    }
    return cont;
}

int main() {
    char *str;
    char achado;
    int res;
    
    int quanti = pedirQtde();
    str = (char *) malloc(quanti * sizeof(char)); 
    limparBuffer();
    
    printf("Informe os caracteres: ");
    fgets(str, quanti, stdin);
    limparBuffer();
    
    res = contagem(str,quanti);
    printf("Quantidade de letras e: %d", res);
    free(str);
    
    return 0;
}
