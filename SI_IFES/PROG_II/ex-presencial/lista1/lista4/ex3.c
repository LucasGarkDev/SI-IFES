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
#define _USE_MATH_DEFINES 

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
    float raio, res;
    raio = pedirValor(2,3);
    res = M_PI * (raio * raio);
    return res;
}

int lerOpcao() {
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

int main() {
    int opcao;
    float res2, res1;
    do {
        opcao = lerOpcao();
        switch (opcao) {
            case 1:
            printf("\n\tÁREA DO RETÂNGULO\n");
            res2 = calcularRetangulo();
            printf("\n%s\n", resultado);
            printf("O resultado dessa area e: %.2f", res2);
            break;
        case 2:
            printf("\n\tÁREA DO CÍRCULO\n");
            res1 = calcularCirculo();
            printf("\n%s\n", resultado);
            printf("O resultado dessa area e: %.2f", res1);
            break;
        }
    } while ( opcao > 0);
    return 0;
}
