#include <stdio.h>

#define operacoes "-------OPERACOES-------"

int main() {
    int x = 0;
    int y = 0;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;
    subtracao = x - y;
    multiplicacao = x * y;
    divisao = x / y;

    printf("\n%s\n", operacoes);
    printf("Essa e a soma de %d com %d: %d\n", x, y, soma);
    printf("Essa e a subtracao de %d com %d: %d\n", x, y, subtracao);
    printf("Essa e a multiplicacao de %d com %d: %d\n", x, y, multiplicacao);
    printf("Essa e a divisao de %d com %d: %d\n", x, y, divisao);

    int dado = 10;
    int res = 0;
    printf("Variavel no original: %d\n", dado);
    res = dado++;
    printf("Variavel com incremento: %d\n", dado);
    res = dado--;
    printf("Variavel com decremento: %d\n", dado);
    res = dado += 3;
    printf("Variavel com incremento de 3: %d\n", dado);
    res = dado -= 3;
    printf("Variavel com decremento de 3: %d\n", dado);
    res = dado *= 3;
    printf("Variavel com multiplicacao igual de 3: %d\n", dado);
    res = dado /= 3;
    printf("Variavel com divisao igual de 3: %d\n", dado);

    return 0;
}
