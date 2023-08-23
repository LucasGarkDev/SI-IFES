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
#include <math.h> // Para pegar o PI

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirValor(int deci1, int deci2){
    float num, res;
    if (deci1 == 1){
        if (deci2 == 1){
            do{
                printf("Digite o valor da Base: ");
                scanf("%f", &num);
            } while (num < 0);
            return num;
        }else{
            do{
                printf("Digite o valor da Altura: ");
                scanf("%f", &num);
            } while (num < 0);
            return num;
        }
    }else{
        do{
            printf("Digite o valor da Raio: ");
            scanf("%f", &num);
        } while (num < 0);
        res = num * num;
        return res;
    } 
}

float calcularRetangulo(){
    float base, altura, res;
    base = pedirValor(1,1);
    altura = pedirValor(1,2);
    res = base * altura;
    return res;
}

float calcularCirculo(){
    float pi, raio, res;
    raio = pedirValor(2,3);
    pi = M_PI;
    res = pi * (raio * raio);
    return res;
}


int menu(){ 
    int op;
    do{
        printf("\n\nCALCULAR A ÁREA:\n");
        printf("1-Retângulo\n");
        printf("2-Círculo\n");
        printf("0-Sair\n");
        printf("Informe sua opção: ");
        scanf("%d", &op);
    } while ((op != 1)&&(op != 2)&&(op != 0));
    return op;
}

int main(){
    printf("\n%s\n", inicio);
    int decisao;
    float res;
    decisao = menu();
    if (decisao == 1){
        res = calcularRetangulo();
    }else if (decisao == 2){
        res = calcularCirculo();
    }else{
        printf("Fim do programa....");
        return 0;
    }
    printf("\n%s\n", resultado);
    printf("O resultado final sera: %.2f", res);
    printf("\n%s\n", corte);
    return 0;
}
