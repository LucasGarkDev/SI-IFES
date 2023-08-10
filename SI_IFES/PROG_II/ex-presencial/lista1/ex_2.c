/*Uma P.G. (progressão geométrica) fica determinada pela 
sua razão (q) e pelo primeiro termo (a1). Implemente um 
programa em C que seja capaz de determinar qualquer 
termo de uma P.G., dado a razão e o primeiro termo. 
an = a1 x q(n - 1) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

int perdir1Termo();
int pedirRazao();
int pedirQtdeTermos();
int calculo(int a1, int n, int q);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int a1, n, q, res;
    a1 = perdir1Termo();
    n = pedirQtdeTermos();
    q = pedirRazao();
    res = calculo(a1,n,q);
    printf("\n%s\n", resultado);
    printf("O resultado do termo de numero %d...\n", n);
    printf("E igual a : %d\n", res);
    printf("\n%s\n", corte);
}

int perdir1Termo(){
    int num;
    printf("Digite o primeiro termo da P.G: ");
    scanf("%d", &num);
    return num;
}

int pedirRazao(){
    int num;
    printf("Digite a razao da P.G: ");
    scanf("%d", &num);
    return num;
}

int pedirQtdeTermos(){
    int num;
    printf("Digite a quantidade de termos da P.G: ");
    scanf("%d", &num);
    while (num = 0){
        puts("Numero Invalido");
        printf("Digite a quantidade de termos da P.G, novamente: ");
        scanf("%d", &num);
    }
    return num;
}

int calculo(int a1, int n, int q){
    int an;
    an = a1 * pow(q,(n - 1));
    return an;
}

