# Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos 
# números primos existentes entre 1 e um número inteiro informado pelo usuário.

#pedir o numero para o usuario
numInformado = int(input("Digite o numero de numeros primos que voce deseja ver: "))
while numInformado < 2 :
    print("Não existe numero primo menor que 2.")
    numInformado = int(input("Digite novamente: "))

#validar se o numero e primo ou nao
num = 2
divisor = 2
numPrimo = True
while num <= numInformado:

    while divisor < num :
        if num % divisor == 0 :
            numPrimo = False
            divisor = num + 1
        else :
            divisor = divisor + 1
    
    if numPrimo == True :
        print(num)
    
    num = num + 1
    


            
        
