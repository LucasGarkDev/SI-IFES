# Faça um programa que gere dois vetores com 20 números aleatórios em 
# cada (utilize a função implementada nos exercícios anteriores). Faça 
# uma função que gere um terceiro vetor de 40 elementos, cujos valores 
# deverão ser compostos pelos elementos intercalados dos dois outros 
# vetores (essa função receberá os três vetores como parâmetros).Imprima
# os três vetores (faça somente uma função imprimir e chame-a três 
# vezes).

import random
#-----------------funçoes------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio():
    min = 1
    max = 100
    return random.randint(min,max)

#preencher o vetor
def preencherVetor(vetor):
    cont = 0
    while cont < 20 :
        n = gerarNumAleatorio()
        vetor.append(n)
        cont = cont + 1

#preencher o vetor 3
def preencherVet3(vet1,vet2,vet3):
    i = 0
    while i < 20 :
        vet3.append(vet1[i])
        vet2.append(vet2[i])
        i = i + 1

#imprimir
def imprimir(vetor):
    if len(vetor) == 40 :
        print("O vetor 3 é: %s"%vetor)
    elif vetor[0] % 2 == 0 :
        print("O vetor 1 é: %s"%vetor)
    else :
        print("O vetor 2 é: %s"%vetor)

#-----------------main---------------------
vet1 = []
vet2 = []
preencherVetor(vet1)
preencherVetor(vet2)
vet3 = []
preencherVet3(vet1,vet2,vet3)
imprimir(vet3)
imprimir(vet1)
imprimir(vet2)
