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
def preencherVetor(min,max,vetor):
    cont = 0
    while cont < 50 :
        n = gerarNumAleatorio(min,max)
        vetor.append(n)
        cont = cont + 1

#percorrer o vetor
def percorrerVetor(vetor):
    i = 0
    pares = 0
    impares = 0
    while i < len(vetor):
        if vetor[i] % 2 == 0:
            pares = pares + 1
        else :
            impares = impares + 1
        i = i + 1
    ip = "pares"
    imprimir(pares,ip)
    ip = "impares"
    imprimir(impares,ip)

#imprimir 
def imprimir(qtdeElemento,ip):
    print("Essa e a quantidade de numeros %s : %d"%(ip,qtdeElemento))

#-----------------main---------------------
def main():
    min = 1
    max = 100
    numeros = []
    preencherVetor(min,max,numeros)
    percorrerVetor(numeros)
main()