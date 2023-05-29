# Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos 
# números primos existentes entre 1 e um número inteiro informado pelo usuário.

#pedir o numero para o usuario
numInformado = int(input("Digite o numero de numeros primos que voce deseja ver: "))
while numInformado < 2 :
    print("Não existe numero primo menor que 2.")
    numInformado = int(input("Digite novamente: "))

#validar se o numero e primo ou nao
num = 2
numPrimo = 0
numNaoPrimo = 0
while num <= numInformado:
    if num > 1 :
        divisor = 2
        while divisor < num :
            if num % divisor == 0 :
                numNaoPrimo = num
            divisor = divisor + 1
        else :
            numPrimo = num
            print(numPrimo)
    num = num + 1
    


            
        
