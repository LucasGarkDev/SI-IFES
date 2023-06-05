# Faça um programa, com uma função que necessite de três argumentos, 
# e que forneça a soma desses três argumentos através de uma função.
#  Seu script também deve fornecer a média dos três números, 
#  através de uma segunda função que chama a primeira.


#funçao de pedir 
def argumentoSoma() :
    cont = 1
    soma = 0
    while cont <= 3:
        num = int(input("Digite um numero: "))
        while num <= 0 :
            print("numero invalido")
            num = int(input("Digite um numero: "))
        soma = soma + num
        cont = cont + 1
    return soma

#funçao de calcular a media
def calcularMedia(soma) :
    media = soma / 3
    return media

#-----------------------------------------------------------------------------
#leitura
soma = argumentoSoma()
media = calcularMedia(soma)

print("A media e: %.2f"%media)
