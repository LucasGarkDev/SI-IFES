#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define inicio "--------INICIO--------"
#define resultado "-----------RESULTADO-----------"
#define corte "-------------------------------------"
#define tam 4

int somarNumeros(int vetor[]);
int calcularMedia(int vetor[]);
void pedirNumeros(int vetor[]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n%s\n", inicio);
    int vetor[tam];
    pedirNumeros(vetor);
    int media = calcularMedia(vetor);
    printf("\n%s\n", resultado);
    printf("A média dessas notas é: %d\n", media);
    return 0;
}

void pedirNumeros(int vetor[]){
    int nota;
    for (int i = 0; i < tam; i++){
        printf("Digite o número correspondente à nota %d:", i+1);
        scanf("%d", &nota);
        while (nota < 0){
            puts("Nota inválida");
            printf("Digite novamente a nota %d:", i+1);
            scanf("%d", &nota);
        }
        vetor[i] = nota;
    }
}

int somarNumeros(int vetor[]){
    int soma = 0;
    for (int i = 0; i < tam; i++){
        soma += vetor[i];
    }
    return soma;
}

int calcularMedia(int vetor[]){
    int soma = somarNumeros(vetor);
    float media = (float)soma / tam;
    return (int)media; // Fazemos um cast de volta para int.
}
