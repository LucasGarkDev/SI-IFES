/*Uma P.A. (progressão aritmética) fica determinada pela sua 
razão (r) e pelo primeiro termo(a1). Faça um programa em 
linguagem C, que seja capaz de determinar qualquer termo de 
uma P.A., dada a razão, o primeiro termo e a quantidade de 
termos.  an = a1 + (n-1) x r */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int perdir1Termo();
int pedirRazao();
int pedirQtdeTermos();
int calculo(int a1, int n, int r);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int a1, n, r, res;
    a1 = perdir1Termo();
    n = pedirQtdeTermos();
    r = pedirRazao();
    res = calculo(a1,n,r);
    printf("\n%s\n", resultado);
    printf("O resultado do termo de numero %d...\n", n);
    printf("E igual a : %d\n", res);
    printf("\n%s\n", corte);
}

int perdir1Termo(){
    int num;
    printf("Digite o primeiro termo da P.A: ");
    scanf("%d", &num);
    return num;
}

int pedirRazao(){
    int num;
    printf("Digite a razao da P.A: ");
    scanf("%d", &num);
    return num;
}

int pedirQtdeTermos(){
    int num;
    printf("Digite a quantidade de termos da P.A: ");
    scanf("%d", &num);
    while (num <= 0){
        puts("Numero Invalido");
        printf("Digite a quantidade de termos da P.A, novamente: ");
        scanf("%d", &num);
    }
    return num;
}

int calculo(int a1, int n, int r){
    int an;
    an = a1 + (n-1) * r;
    return an;
}
