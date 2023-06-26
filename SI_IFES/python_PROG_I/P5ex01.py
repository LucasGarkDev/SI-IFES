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
    par = 0
    impar = 0
    while cont < 50 :
        n = gerarNumAleatorio(min,max)
        numeros.append(n)
        par = percorreNum(numeros,n,int(par),int(impar))
        impar = percorreNum(numeros,n,int(par),int(impar))
        cont = cont + 1
    r1 = contPar(int(par))
    r2 = contImpar(int(impar))
    imprimir(r1,r2)

#percorrer os numeros
def percorreNum(numeros,n,par,impar):
    for n in numeros :
        parOuImpar(n,par,impar)

        
#verificar se e par ou impar
def parOuImpar(n,par,impar):
    if n % 2 == 0 :
        par = par + 1
        return par
    else :
        impar = impar + 1
        return impar

#contar quantos pares 
def contPar(p): 
    return len(p)

#contar quantos impares
def contImpar(i):
    return len(i)

#imprimir os pares e impares
def imprimir(r1,r2):
    print("---------------------------------------------")
    print("O resultado de numeros pares sao %d"%r1)
    print("O resultado de numeros impares sao %d"%r2)
    print("---------------------------------------------")
    
#-----------------------main---------------------------
def main():
    numeros = []
    min = 1
    max = 100
    guardarVetor(numeros,min,max)
main()