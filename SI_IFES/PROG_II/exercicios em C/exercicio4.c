#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirNumero(); 
float comparaNumeros(float n1, float n2);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    float num1, num2, res;
    num1 = pedirNumero();
    num2 = pedirNumero();
    res = comparaNumeros(num1,num2);
    printf("\n%s\n", resultado);
    if (res == 1){
        puts("Os numeros sao iguais");
    }else{
        printf("O maior numero entre %.2f e %.2f e: %.2f", num1,num2,res);
    }
    return 0;
}

float pedirNumero(){
    float guarda;
    printf("Digite um numero:\n");
    scanf("%f", &guarda);
    while (guarda <= 0){
        puts("Numero invalido!\n");
        printf("Digite um numero,novamente\n:");
        scanf("%f", &guarda);
    }
    return guarda;
}

float comparaNumeros(float n1, float n2){
    float maior = 0.0;
    if (n1 > n2){
        maior = n1;
    }else if (n2 > n1){
        maior = n2;
    }else{
        return 1;
    }
    return maior;
}