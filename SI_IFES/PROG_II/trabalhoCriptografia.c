/*Trabalho de criptografia*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define INICIO "--------INICIO--------"
#define RESULTADO "-----------RESULTADO-----------"
#define CORTE "-------------------------------------"
// #define TAM 21

int pedirQtde(){
    int num;
    do{
        printf("Digite a quantidade de caracteres do texto: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void limparBuffer(){
    int ch;
    do{
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

void primeiraEtapa(char *vetorMain, int quanti){
    int i;
    for (i = 0; i < quanti; i++){
        if (vetorMain[i] == 'o'){
            vetorMain[i] = '0';
        }else if (vetorMain[i] == '0'){
            vetorMain[i] = 'o';
        }
        if (vetorMain[i] == 'a'){
            vetorMain[i] = '@';
        }else if (vetorMain[i] == '@'){
            vetorMain[i] = 'a';
        } 
    }
}

void segundaEtapa(char *vetorMain, int quanti, char *par, char *impar){
    int i, j = 0, k = (quanti / 2) - 1;
    for (i = 0; i < quanti; i++){
        if (i % 2 == 0){
            par[j] = vetorMain[i];
            j++;
        }else{
            impar[k] = vetorMain[i];
            k--;
        }
    }
    par[j] = '\0'; 
    impar[k] = '\0';
}

void terceitaEtapa(char *vetorRes, int quanti, char *par, char *impar){
    int i, j = 0, k = 0;
    for (i = 0; i < quanti; i++){
        if (i % 2 == 0){
            vetorRes[i] = par[j];
            j++;
        }else{
            vetorRes[i] = impar[k];
            k++;
        }
    }
    vetorRes[quanti] = '\0';
}

int main() {
    char *str;
    int res;
    int quanti = pedirQtde();
    str = (char *) malloc(quanti * sizeof(char)); 
    limparBuffer();
    printf("Informe os caracteres: ");
    fgets(str, quanti, stdin);
    limparBuffer();
    res = strlen(str);
    if (str[res-1] == '\n'){
        str[--res] = '\0';
    }
    int tamanho = (res + 1) / 2; 
    char *strPar = (char *)malloc(tamanho * sizeof(char));
    char *strImpar = (char *)malloc(tamanho * sizeof(char));
    char *strRes = (char *)malloc((res + 1) * sizeof(char));
    primeiraEtapa(str,res);
    segundaEtapa(str,res,strPar,strImpar);
    terceitaEtapa(strRes,res,strPar,strImpar);
    printf("A string final e: %s", strRes);
    free(str);
    free(strPar);
    free(strImpar);
    free(strRes);
    return 0;
}