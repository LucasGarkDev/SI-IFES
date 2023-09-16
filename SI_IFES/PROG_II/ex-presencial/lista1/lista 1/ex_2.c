/*Uma P.G. (progressão geométrica) fica determinada pela 
sua razão (q) e pelo primeiro termo (a1). Implemente um 
programa em C que seja capaz de determinar qualquer 
termo de uma P.G., dado a razão e o primeiro termo. 
an = a1 x q(n - 1) */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"


int pedirNum(int desc){
    int res;
    if (desc == 1){
        printf("Digite o primeiro numero dessa P.G: ");
        scanf("%d", &res);
    }else if(desc == 2){
        printf("Digite a razão dessa P.G: ");
        scanf("%d", &res);
    }else{
        printf("Digite o numero do termo que deseja saber dessa P.G: ");
        scanf("%d", &res);
    }
    return res;
}

int calPg(int a1, int q, int n){
    return a1 * pow(q,(n-1));
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int n, a1, razao, res;
    n = pedirNum(0);
    a1 = pedirNum(1);
    razao = pedirNum(2);
    res = calPg(a1,razao,n);
    printf("\n%s\n", RESULTADO);
    printf("O termo dessa P.G, que corresponde a posiçao %d sera: %d",n ,res);
    printf("\n%s\n", CORTE);
    return 0;
}

