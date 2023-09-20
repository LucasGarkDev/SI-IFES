/*O programa abaixo calcula a área das figuras geométricas retângulo e círculo. Implemente as
funções que estão faltando e complete o programa principal abaixo para que ele execute
corretamente.
 A área do retângulo é: base * altura
 A área do círculo é: PI * raio2
(Para pegar o valor de PI, use: M_PI)
 O tamanho de cada informação (base, altura e raio) deve ser maior que zero.
 A opção a ser lida deve ser 0, 1 e 2. 
*/

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 
#include <math.h> 
#include <windows.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirDados(int desci1, char *texto){
    float res;
    if (desci1 == 1){
        do{
            printf("Digite o valor da %s do retangulo: ", texto);
            scanf("%f", &res);
        } while (res <= 0);
        return res;
    }else{
        do{
            printf("Digite o valor do raio do circulo: ");
            scanf("%f", &res);
        } while (res <= 0);
        return res;
    } 
}

int pedirArea(){
    int num;
    do{
        printf("Escolha entre alguma dessas opçoes:\n");
        printf("1 - AREA DO RETANGULO:\n");
        printf("2- AREA DO CIRCULO:\n");
        printf("Insira a opçao: ");
        scanf("%d", &num);
    } while ((num != 1)&&(num != 2));
    return num;
}


// void imprimir(float num){
//     printf("\n%s\n", resultado);
//     printf("%f,", num);
//     printf("\n%s\n", corte);
// }


int main() {
    SetConsoleOutputCP(65001);
    float base, altura, raio, res;
    int deci;
    deci = pedirArea();
    if (deci == 1){
        base = pedirDados(1,"base");
        altura = pedirDados(1,"altura");
        res = base * altura;
        printf("\n%s\n", resultado);
        printf("O valor da area do Retangulo e: %.2f", res);
        printf("\n%s\n", corte);
    }else{
        raio = pedirDados(0,"  ");
        res = M_PI * (raio * raio);
        printf("\n%s\n", resultado);
        printf("O valor da area do Circulo e: %.2f", res);
        printf("\n%s\n", corte);
    }
    return 0;
}
