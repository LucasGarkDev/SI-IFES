# Utilize a função acima para gerar 50 números aleatórios entre 1 e 100 
# (min=1 e max=100) e armazene em um vetor. Faça outra função que 
# percorra esse vetor e coloque os números pares em um vetor chamado 
# pares e os números ímpares em outro vetor chamado ímpares (essa função 
# receberá três vetores como parâmetros: o principal com todos os números
# , o vetor de pares e o vetor de ímpares). Imprima os três vetores.
# DICA: Você só precisará de uma função imprimir. Chame ela três vezes, 
# uma vez para cada vetor.

import random
#-----------------funçoes------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#preencher o vetor
def preencherVetor(min,max,vetor):
    cont = 0
    while cont < 50 :
        n = gerarNumAleatorio(min,max)
        vetor.append(n)
        cont = cont + 1

#percorrer o vetor
def percorrerVetor(vetor,par,impar):
    i = 0
    while i < len(vetor):
        if vetor[i] % 2 == 0 :
            par.append(vetor[i])
        else :
            impar.append(vetor[i])
        i = i + 1

#mostrar as quantidades
def mostrarQtde(vetor):
    res = len(vetor)
    if len(vetor) == 50 :
        print("A quantidade total de elementos é: %s"%res)
    elif vetor[1] % 2 == 0:
        print("A quantidade de numeros pares é: %s"%res)
    else :
        print("A quantidade de numeros impares é: %s"%res)

#-----------------main---------------------
def main():
    min = 1
    max = 100
    numeros = []
    preencherVetor(min,max,numeros)
    pares = []
    impares = []
    percorrerVetor(numeros,pares,impares)
    mostrarQtde(pares)
    mostrarQtde(impares)
    mostrarQtde(numeros)
main()