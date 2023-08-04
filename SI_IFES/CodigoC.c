#include <stdio.h>

#define inicio "---------------INICIO---------------"
#define resultado "------------RESULTADO------------"

float perguntaDistancia(){
    float resp = 0.0;
    printf("Qual foi a distancia, em metros, que voce andou?");
    scanf("%f", &resp);
    while (resp <= 0){
        printf("Distancia invalida, insira novamente");
        printf("Qual foi a distancia, em metros, que voce andou?");
        scanf("%f", &resp);
    }
    return resp;
}

int main()
{
    printf("\n%s\n", inicio);
    float numero = perguntaDistancia();

    return 0;
}
