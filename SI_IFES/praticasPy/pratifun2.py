# Quadrado mágico. Um quadrado mágico é aquele dividido em linhas e 
# colunas, com um número em cada posição e no qual a soma das linhas, 
# colunas e diagonais é a mesma. Por exemplo, veja um quadrado mágico 
# de lado 3, com números de 1 a 9:
# 8  3  4 
# 1  5  9
# 6  7  2
# Elabore uma função que identifica e mostra na tela todos os quadrados
# mágicos com as características acima. Dica: produza todas as 
# combinações possíveis e verifique a soma quando completar cada 
# quadrado. Usar um vetor de 1 a 9 parece ser mais simples que 
# usar uma matriz 3x3.

import random
#------------------------funçoes----------------------
#funçao para pedir a soma total do quadrado
def pedirSoma():
    soma = int(input("Digite o valor da soma desse quadrado: "))
    while soma < 6 and soma > 24 :
        print("Soma nao possivel")
        soma = int(input("Digite novamente: "))
    return soma

#funçao de escolher um numero
def escolheNumero():
    return random.randint(1,9)

#funçao de produçao da linha
def prodLinha(soma):
    res = 0
    while res != soma:
        l1 = escolheNumero()
        l2 = escolheNumero()
        while l2 == l1 :
            l2 = escolheNumero()
        l3 = escolheNumero()
        while l3 == l2 or l3 == l1 :
            l3 = escolheNumero()
        res = verificaLinha(l1,l2,l3)
    linha = print(l1,l2,l3)
    return linha
    
#funçao de verificaçao da linha
def verificaLinha(l1,l2,l3):
    calculo = l1 + l2 + l3
    return calculo

#funçao de produçao da coluna

#funçao de verificaçao da coluna 
        

#funçao de verificaçao da diagonal


#------------------------main-------------------------
soma = pedirSoma()
linha1 = 1
linha2 = 2
linha3 = 3
while linha1 == linha2 and linha1 == linha3:
    linha1 = prodLinha(soma)
    print(" "*30)
    linha2 = prodLinha(soma)
    while linha2 == linha1 :
        linha2 = prodLinha(soma)
    print(" "*30)
    linha3 = prodLinha(soma)
    while linha3 == linha2 or linha3 == linha1 :
        linha3 = prodLinha(soma)
    print(" "*30)

