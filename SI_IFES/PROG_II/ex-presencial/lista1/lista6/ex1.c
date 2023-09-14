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

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Informe os caracteres: ");
    fgets(str, sizeof(str), stdin);

    printf("Informe o caractere que deseja buscar: ");
    scanf("%c", &ch);
    int i;
    for(i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Quantidade de %c = %d", ch, count);
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
