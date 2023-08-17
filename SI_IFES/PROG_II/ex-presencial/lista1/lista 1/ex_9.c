/*Escreva um programa que pergunte a quantidade de km percorridos por um 
carro alugado pelo usuário, assim como a quantidade de dias pelos quais 
o carro foi alugado. Calcule o preço a pagar, sabendo que o carro custa 
R$ 60,00 por dia e R$ 0,15 por km rodado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"

float pedirKilometragem();
int pedirDiasAlugados();
float calculoFinal(float km, int dias);

int main() {
    printf("\n%s\n", inicio);
    int dias;
    float kilometros, res;
    kilometros = pedirKilometragem();
    dias = pedirDiasAlugados();
    res = calculoFinal(kilometros,dias);
    printf("\n%s\n", resultado);
    printf("O preco final a pagar e %.2f", res);
    printf("\n%s\n", corte);
    return 0;
}

float pedirKilometragem(){
    float num;
    printf("Digite a quantidade de Km percorridos: ");
    scanf("%f", &num);
    while (num < 0) {
        puts("Quilometragem Invalida");
        printf("Digite a quantidade de Km percorridos, novamente: ");
        scanf("%f", &num);
    }
    return num;
}

int pedirDiasAlugados(){
    int num;
    printf("Digite a quantidade de dias para qual o carro foi alugado: ");
    scanf("%d", &num);
    while (num < 0){
        puts("Quantidade invalida Invalida");
        printf("Digite a quantidade de dias para qual o carro foi alugado, novamente: ");
        scanf("%d", &num);
    }
    return num;
}

float calculoFinal(float km, int dias){
    int part1;
    float part2, partFinal;
    part1 = dias * 60;
    part2 = 0.15 * km;
    partFinal = part2 + (float)part1;
    return partFinal;
}
