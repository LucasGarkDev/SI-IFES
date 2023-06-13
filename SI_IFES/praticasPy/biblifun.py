#-----------ex01----------------
#funçao de pedir os numeros
def pedirNum() :
    num = int(input("Digite um numero: "))
    while num < 0 :
        print("Numero Invalido")
        num = int(input("Digite um numero,novamente: "))
    return num

#funçao soma
def soma(soma,n) :
    soma = soma + n
    return soma

#funçao media
def media(soma,quantNum) :
    media = soma / quantNum
    return media

#funçao para outro numero
def outroN() :
    again = str(input("Voce deseja inserir outro numero? ")).lower()
    while again != "sim" and again != "nao" :
        print("Impossivel operaçao")
        again = str(input("Voce deseja inserir outro numero? ")).lower()
    return again

#-----------------------ex