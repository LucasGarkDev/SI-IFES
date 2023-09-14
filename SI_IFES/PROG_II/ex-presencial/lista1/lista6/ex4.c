/*Implemente a função contCaractere, que dado uma string e um caractere, 
determina quantas vezes o caractere aparece na string. */

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

int main() {
    char *str;
    char achado;
    int count = 0, i;
    
    int quanti = pedirQtde();
    str = (char *) malloc(quanti * sizeof(char)); 
    limparBuffer();
    
    printf("Informe os caracteres: ");
    fgets(str, quanti, stdin);
    limparBuffer();
    
    printf("%s\n", str);
    printf("Informe o caractere que deseja buscar: ");
    scanf("%c", &achado);
    
    for(i = 0; str[i] != '\0'; i++) {
        if (achado == str[i]){
            count++;
        }
    }

    printf("Quantidade de %c = %d", achado, count);
    free(str);
    
    return 0;
}
