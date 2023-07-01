# Faça um programa que preenche um vetor de 50 posições com valores 
# aleatórios entre 0 e 20 e encontre: 
# (a) a soma dos valores armazenados no vetor 
# (b) o número de ocorrências do valor 9 
# (c) o maior valor armazenado no vetor 
# (d) as posições onde aparecem o maior valor encontrado em (c)
# –notar que aqui o programa possivelmente imprimirá mais de uma 
# posição

import random
#-----------------funçoes------------------
# Gerar um número aleatório entre MIN a MAX
def gerarNumAleatorio(min,max):
    return random.randint(min,max)

#preencher o vetor
def preencherVetor(vetor):
    cont = 0
    min = 0
    max = 20
    while cont < 50 :
        num = gerarNumAleatorio(min,max)
        vetor.append(num)
        cont += 1
    
#calcular a soma dos elementos do vetor
def somaVetor(vetor):
    i = 0
    soma = 0
    while i < len(vetor):
        soma += vetor[i]
        i += 1
    return soma

#registrar o numero de ocorrencias do 9
def registra9(vetor):
    i = 0
    numeroOcorrencias = 0
    while i < len(vetor):
        if vetor[i] == 9 :
            numeroOcorrencias += 1
        i += 1
    return numeroOcorrencias

#descobre o maior valor
def maiorValor(vetor):
    i = 0
    maior = 0
    while i < len(vetor):
        if vetor[i] > maior:
            maior = vetor[i]
        i += 1
    return maior

#pesquisa os indices do maior valor
def pesquisaMaior(vetor,maior):
    i = 0 
    registraIndices = []
    while i < len(vetor):
        if vetor[i] == maior :
            registraIndices.append(i)
        i += 1
    return registraIndices

#imprimir tudo
def imprimirGeral(soma,num9,maiorVal,iMaiorVal):
    print("-------------IMPRESSAO-------------")
    print("A soma dos valores armazenados no vetor: %d"%soma)
    print("o número de ocorrências do valor 9 : %d"%num9)
    print("o maior valor armazenado no vetor : %d"%maiorVal)
    print("as posições onde aparecem o maior valor encontrado em (c): %s"%iMaiorVal)
    print("-----------------------------------")

#-----------------main---------------------
def main():
    vetor = []
    preencherVetor(vetor)
    soma = somaVetor(vetor)
    num9 = registra9(vetor)
    maiorVal = maiorValor(vetor)
    indiceMaiorVal = pesquisaMaior(vetor,maiorVal)
    imprimirGeral(soma,num9,maiorVal,indiceMaiorVal)
main()


