# Os números primos possuem várias aplicações dentro da Computação, por exemplo na Criptografia. 
# Um número primo é aquele que é divisível apenas por um e por ele mesmo. Faça um programa que 
# peça um número inteiro e determine se ele é ou não um número primo.

#pedindo um numero
num = int(input("Digite um numero: "))
while num < 0 :
    print("Numero invalido")
    num = int(input("Digite novamente: "))

#validando se ele e primo ou nao
numPrimo = 0
divisor = 2
numPrimo = True
if num > 1 :

    while divisor < num :
        if num % divisor == 0 :
            print("O numero %d, não e primo."%num)
            numPrimo = False
            divisor = num + 1
        else :
            divisor = divisor + 1
    
    if numPrimo == True :
        print("O numero %d, e primo."%num) 

else :
    print("O numero tem que ser maior que 1.")
    um = int(input("Digite novamente: "))
