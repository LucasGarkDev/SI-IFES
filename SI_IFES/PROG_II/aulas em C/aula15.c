#include <stdio.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado1 "-----------RESULTADO1-----------"
#define resultado2 "-----------RESULTADO2-----------"
#define resultado3 "-----------RESULTADO3-----------"
#define corte "-------------------------------------"

int main() {
    setlocale(LC_ALL,"Portuguese");
    printf("\n%s\n", inicio);
    
    char s[10];

    printf("Digite algo(scanf padrao):\n");
    scanf("%s", s);
    fflush(stdin);

    printf("\n%s\n", resultado1);
    printf("O texto e: %s\n", s);

    printf("\n%s\n", corte);
    printf("Digite algo(scanf tunado):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);
    
    printf("\n%s\n", resultado2);
    printf("O texto e: %s\n", s);
    
    printf("\n%s\n", corte);
    printf("Digite alguma frase(fgets):\n");
    fgets("%s",10, stdin);
    fflush(stdin);

    printf("\n%s\n", resultado3);
    puts(s);

    printf("\n%s\n", corte);

}