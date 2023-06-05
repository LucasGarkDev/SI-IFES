# Faça um programa que recebe três números do usuário, 
# e identifica o maior através de uma função e o menor número através 
# de outra função.

#-------funçoes------------------
#funçao para pedir um numero
def pedirNum() :
    num = float(input("Digite um numero: "))
    while num <= 0 :
        print("numero invalido")
        num = float(input("Digite um numero: "))
    return num


#funçao para ver se e o maior
def maior() :
    numMaior = 0
    if numCompara > numMaior :
        numMaior = numCompara
    return numMaior

def menor() :
    numMenor = 0
    if numCompara < numMenor :
        numMenor = numCompara
    return numMenor

#funçao para ler 


#---------------main------------------
#inicializar
cont = 1

#leitura
while cont <= 3 :
    numCompara = pedirNum()
    top = maior(numCompara)
    down = menor(numCompara)
    cont = cont + 1 
print("O maior numero e: %.2f"%top)
print("O menor numero e: %.2f"%down)
