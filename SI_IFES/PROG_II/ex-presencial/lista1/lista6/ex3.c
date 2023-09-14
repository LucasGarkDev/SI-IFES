/*Ler uma data no formato: “dd/mm/aaaa” e imprimir a data no 
formato americano “aaaa-mmdd”. */

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
    int i, j = 0, x = 0, z = 0;
    
    int quanti = pedirQtde();
    str = (char *) malloc(quanti * sizeof(char)); 
    limparBuffer();
    
    printf("Informe a data(dd/mm/aaaa): ");
    fgets(str, quanti, stdin);
    limparBuffer();
    
    char dia[2], mes[2], ano[4];
    
    for (i = 0; i < quanti; i++){
        if (str[i] == 1 || str[i] == 0){
            dia[j] =
        }
        
    }
    
    
    free(str);
    
    return 0;
}
