# Utilize a função abaixo para gerar 50 números aleatórios entre 1 
# e 100 (min=1 e max=100)e armazene em um vetor. Faça outra função 
# para percorrer esse vetor e contar a quantidade de números pares 
# e ímpares que foram gerados. Mostre essas quantidades na
# tela.

import random
#-----------------------funçoes------------------------
# Gerar um número aleatório entre MIN e MAX
def gerarNumAleatorio(min, max):
    return random.randint(min, max)

# Repetir a escolha de números e guardar no vetor
def guardarVetor(numeros, min, max):
    cont = 0
    par = 0
    impar = 0
    while cont < 50:
        n = gerarNumAleatorio(min, max)
        numeros.append(n)
        par, impar = percorreNum(numeros, par, impar)
        cont = cont + 1
    r1 = contPar(par)
    r2 = contImpar(impar)
    imprimir(r1, r2)

# Percorrer os números
def percorreNum(numeros, par, impar):
    for n in numeros:
        par, impar = parOuImpar(n, par, impar)
    return par, impar

# Verificar se é par ou ímpar
def parOuImpar(n, par, impar):
    if n % 2 == 0:
        par = par + 1
    else:
        impar = impar + 1
    return par, impar

# Contar quantos pares
def contPar(p):
    return p

# Contar quantos ímpares
def contImpar(i):
    return i

# Imprimir os pares e ímpares
def imprimir(r1, r2):
    print("---------------------------------------------")
    print("O resultado de números pares são %d" % r1)
    print("O resultado de números ímpares são %d" % r2)
    print("---------------------------------------------")

#-----------------------main---------------------------
def main():
    numeros = []
    min = 1
    max = 100
    guardarVetor(numeros, min, max)

main()