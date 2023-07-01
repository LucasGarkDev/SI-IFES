# Faça um programa que preenche um vetor de 10 posições com números 
# aleatórios entre 0 e 20.Após o preenchimento,o programa deve 
# manipular os valores de cada posição do vetor fazendo um shift 
# para a direita.Além disso,o vetor deve ser considerado circular,
# ou seja,o valor da última célula passa a ser o valor da primeira.
# Exemplo: 
# Vetor original [2,1,20,5,17,19,14,4,18,5] 
# Vetor manipulado [5,2,1,20,5,17,19,14,4,18]

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
    while cont < 10 :
        num = gerarNumAleatorio(min,max)
        vetor.append(num)
        cont += 1
    print(vetor)

#manipular o vetor
def manipulaVetor(vetor):
    i = 0
    while i < len(vetor):
        j = i + 1
        if vetor[i] == vetor[9]:
            vetor[i] = vetor[0]
        vetor[i] = vetor[j]
        i += 1
    print(vetor)



#-----------------main---------------------
vetor = []
preencherVetor(vetor)
manipulaVetor(vetor)

