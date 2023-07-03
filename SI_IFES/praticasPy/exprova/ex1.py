# Utilize a função abaixo para gerar 50 números aleatórios entre 1 e 100 
# (min=1 e max=100) e armazene em um vetor. Faça outra função para 
# percorrer esse vetor e contar a quantidade de números pares e ímpares 
# que foram gerados. Mostre essas quantidades na
# tela.

import random
#-----------------funçoes------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#preencher o vetor
def preencheVetor(min,max,vetor):
    i = 0
    while i < 50 :
        n = gerarNumAleatorio(min,max)
        vetor.append(n)
        i += 1

#percorrer e descobrir os pares e impares
def percorreVetor(vetor):
    i = 0
    par = 0
    impar = 0
    while i < len(vetor):
        if vetor[i] % 2 == 0 :
            par += 1
        else :
            impar += 1
        i += 1
    imprimirParesImpares(par,impar)

#imprimir os pares e impares
def imprimirParesImpares(par,impar):
    print("-----------NUMEROS PARES E IMPARES-----------")
    print("A quantidade de numeros pares e: %d"%par)
    print("A quantidade de numeros impares e: %d"%impar)
    print("---------------------------------------------")


#-----------------main---------------------
def main():
    numeros = []
    min = 1
    max = 100
    preencheVetor(min,max,numeros)
    percorreVetor(numeros)
main()