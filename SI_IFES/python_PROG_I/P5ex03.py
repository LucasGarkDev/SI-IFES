# Faça um programa que gere dois vetores com 20 números aleatórios 
# em cada (utilize a função implementada nos exercícios anteriores). 
# Faça uma função que gere um terceiro
# vetor de 40 elementos, cujos valores deverão ser compostos pelos 
# elementos intercalados
# dos dois outros vetores (essa função receberá os três vetores 
# como parâmetros). Imprima os três vetores (faça somente uma 
# função imprimir e chame-a três vezes).


import random
#-----------------------funçoes------------------------
#preencher o vetor 1 e 2
def preencheVetor(v):
    min = 0
    max = 100
    c = 0
    while c < 20:
        n = gerarNumAleatorio(min, max)
        v.append(n)
        c += 1

#gerar um número aleatório entre MIN e MAX
def gerarNumAleatorio(min, max):
    return random.randint(min, max)

#preencher o vetor 3
def ultimoVetor(v1, v2, v3):
    i1 = 0  
    i2 = 0  
    c = 0
    while c < 40:
        if c % 2 == 0:
            a = v1[i1]
            v3.append(a)
            i1 += 1
        else:
            a = v2[i2]
            v3.append(a)
            i2 += 1
        c += 1

#imprimir
def imprimir(v):
    print(v)
#-----------------------main---------------------------
def main():
    v1 = []
    v2 = []
    preencheVetor(v1)
    preencheVetor(v2)
    v3 = []
    ultimoVetor(v1,v2,v3)
    imprimir(v1)
    imprimir(v2)
    imprimir(v3)
main()