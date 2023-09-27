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
        }
        if (vetorMain[i] == '0'){
            vetorMain[i] = 'o';
        }
        if (vetorMain[i] == 'a'){
            vetorMain[i] = '@';
        }
        if (vetorMain[i] == '@'){
            vetorMain[i] = 'a';
        } 
    }
}

void segundaEtapa(char *vetorMain, int quanti, char *par, char *impar){
    int i, j = quanti, k = 0;
    for (i = 0; i < quanti; i++){
        if (i % 2 == 0){
            par[j] = vetorMain[i];
            j--;
        }else{
            impar[k] = vetorMain[i];
            k++;
        }
    }
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
    free(str);
    char strPar[res/2];
    char strImpar[res/2];
    char strRes[quanti];
    primeiraEtapa(str,res);
    if (res % 2 == 1){
        res--;
    }
    segundaEtapa(str,res,strPar,strImpar);
    terceitaEtapa(strRes,res,strPar,strImpar);
    printf("A string final e: %s", strRes);
    return 0;
}