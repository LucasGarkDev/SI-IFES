/*Implemente  manualmente  a função  strlen, ou seja, 
uma função que conta a quantidade de caracteres de uma 
string (obviamente não é permitido o uso da função strlen 
da biblioteca <string.h>*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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

void inserirString(char *vetor, int quanti){
    printf("Digite o texto no vetor: ");
    fgets(vetor,quanti,stdin);
    limparBuffer();
}

void alocarMEM(char **vetor, int tamanho){
    *vetor = (char *) calloc(tamanho , sizeof(char));
}

int contagem(char *string, int quanti){
    int i, cont = 0;
    char vetor[quanti+1];
    for (i = 0; i < quanti; i++){
        string[i] = toupper(string[i]);
        if (string[i] != '\n' && string[i] != EOF){
            cont++;
        }
    }
    return cont;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    char *nome;
    int quanti = pedirQtde();
    alocarMEM(&nome,quanti);
    inserirString(nome,quanti);
    int res = contagem(nome,quanti);
    printf("\n%s\n", RESULTADO);
    printf("A quantidade de letras presente nesse texto e: %d", res);
    printf("\n%s\n", CORTE);
    return 0;
}
// int contagem(char *string) {
//     int length = strcspn(string, "\n"); // Encontra o índice da primeira ocorrência de '\n' (ou seja, o final da linha)
    
//     int cont = 0;
    
//     for (int i = 0; i < length; i++) {
//         if (isalpha((unsigned char)string[i])) {
//             cont++;
//         }
//     }
    
//     return cont;
// }

// int main() {
//     char *nome = NULL;
//     size_t tamanho = 0;
    
//     printf("Digite o texto: ");
//     getline(&nome, &tamanho, stdin);
    
//     int res = contagem(nome);
    
//     printf("A quantidade de letras presente nesse texto é: %d\n", res);
    
//     free(nome);
    
//     return 0;
// }
