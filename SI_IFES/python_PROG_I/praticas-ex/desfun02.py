# Faça um programa que recebe três números do usuário, 
# e identifica o maior através de uma função e o menor número através 
# de outra função.

#-------funçoes------------------
#funçao para pedir um numero e validar ele
def pedirNum():
    num = int(input("Digite um numero: "))
    while num <= 0 :
        print("Numero Invalido")
        num = int(input("Digite outro numero: "))
    print("Passei no pedirNum")
    return num


#funçao para ver se e o maior 
def maior(numCompara, maiorNum):
    if numCompara > maiorNum :
        maiorNum = numCompara
    print("Passei no maior")
    return maiorNum


#funçao para ver se e o menor
def menor(numCompara, menorNum):
    if numCompara < menorNum :
        menorNum = numCompara
    print("Passei no menor")
    return menorNum

#---------------main------------------
def main() :
    #inicializar
    maiorNum = 0
    menorNum = 3
    cont = 1

    #leitura

    numCompara = pedirNum()
    maior(numCompara,maiorNum)
    menor(numCompara,menorNum)
    while cont < 3 :
        numCompara = pedirNum()
        maxNum = maior(numCompara,maiorNum)
        minNum = menor(numCompara,menorNum)
        cont = cont + 1
    print("O maior numero e: %d"%maxNum)
    print("O menor numero e: %d"%minNum)

main()
