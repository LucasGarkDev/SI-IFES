# Utilize a função abaixo para gerar 50 números aleatórios entre 1 
# e 100 (min=1 e max=100)e armazene em um vetor. Faça outra função 
# para percorrer esse vetor e contar a quantidade de números pares 
# e ímpares que foram gerados. Mostre essas quantidades na
# tela.

import random
#-----------------------funçoes------------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#repetir a escolha de numeros e guardar no vetor
def guardarVetor(numeros,min,max):
    cont = 0
    while cont < 50 :
        n = gerarNumAleatorio(min,max)
        numeros.append(n)
        cont = cont + 1

#percorrer os numeros
def percorreNum(num,par,impar):
    i = 0 
    while i < len(num):
        parOuImpar(num[i],par,impar)
        i = i + 1
       
#verificar se e par ou impar
def parOuImpar(n,par,impar):
    if n % 2 == 0 :
        par.append(n)
    else :
        impar.append(n)

#imprimir os pares e impares
def imprimir(v):
    if len(v) == 50 :
        print("O total de numeros e: %s "%v)
    elif v[0] % 2 == 0:
        print("Os numeros pares sao: %s "%v)
    else :
        print("Os numeros impares sao: %s "%v)

#-----------------------main---------------------------
def main():
    numeros = []
    par = []
    impar = []
    min = 1
    max = 100
    guardarVetor(numeros,min,max)
    percorreNum(numeros,par,impar)
    imprimir(numeros)
    imprimir(par)
    imprimir(impar)
      
main()
