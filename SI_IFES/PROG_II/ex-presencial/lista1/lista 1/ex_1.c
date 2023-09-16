/*Uma P.A. (progressão aritmética) fica determinada pela sua 
razão (r) e pelo primeiro termo(a1). Faça um programa em 
linguagem C, que seja capaz de determinar qualquer termo de 
uma P.A., dada a razão, o primeiro termo e a quantidade de 
termos.  an = a1 + (n-1) x r */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"


int pedirNum(int desc){
    int res;
    if (desc == 1){
        printf("Digite o primeiro numero dessa P.A: ");
        scanf("%d", &res);
    }else if(desc == 2){
        printf("Digite a razão dessa P.A: ");
        scanf("%d", &res);
    }else{
        printf("Digite a quantidade de termos dessa P.A: ");
        scanf("%d", &res);
    }
    return res;
}

int calRazao(int a1, int r, int n){
    return a1 + (n-1) * r;
}

int main(){
    SetConsoleOutputCP(65001);
    printf("\n%s\n", INICIO);
    int n, a1, razao, res;
    n = pedirNum(0);
    a1 = pedirNum(1);
    razao = pedirNum(2);
    res = calRazao(a1,razao,n);
    printf("\n%s\n", RESULTADO);
    printf("A quantidade de termos dessa P.A sera: %d", res);
    printf("\n%s\n", CORTE);
    return 0;
}