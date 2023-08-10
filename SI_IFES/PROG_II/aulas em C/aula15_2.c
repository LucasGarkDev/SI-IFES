#include <stdio.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 50

int impressaoLetraALetra(char s[tam], int i){
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n%s\n", inicio);

    char origem[tam] = {"Olá Mundo!"};
    char destino[tam];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    printf("\n%s\n", resultado);
    strcpy(destino,origem);
    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    printf("\n%s\n", corte);
    
    char s1[tam] = {"Logica de"};
    char s2[tam] = {" Programacão"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str1: %s\n", s1);

    printf("\n%s\n", resultado);
    strcat(s1,s2);
    printf("Antes do strcat:\n");
    puts(s1);

    printf("\n%s\n", corte);

    char s[tam];
    int i;

    printf("Digite alguma frase(max = 50 letras):\n");
    fgets("%s", 50, stdin);
    i = strlen(s);
    printf("\n%s\n", resultado);
    printf("O tamanho do texto: %d\n\n", i);

    impressaoLetraALetra(s[tam], i);

    printf("\n%s\n", corte);

    char hardText[tam] = {"/exit"};
    char senha_usr[tam];
    int ok;

    printf("Digite alguma frase(max = 50 letras):\n");
    fgets("%s", 50, stdin);

    printf("\n%s\n", resultado);
    ok = strcmp(hardText, senha_usr);
    
    if (ok == 0){
        printf("Textos iguais!!\n");
    }else{
        printf("Textos diferentes!!\n");
    }
    printf("\n%s\n", corte);
}