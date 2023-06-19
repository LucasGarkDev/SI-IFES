# Crie uma função que recebe um inteiro positivo e teste para saber se 
# ele é primo ou não. Faça um script que recebe um inteiro n e mostra 
# todos os primos, de 1 até n.

#------------------------funçoes----------------------
#pedir o valor de n
def pedirN():
    n = int(input("Digite um numero: "))
    while n <= 0 :
        print("Esse numero nao e valido")
        n = int(input("Digite novamente: "))
    return n

#verificar se e primo
def verificarPrimo(cont):
    divisor = 2
    numPrimo = True
    if cont > 1 :
        while divisor < cont :
            if cont % divisor == 0 :
                numPrimo = False
                divisor = cont + 1
            else : 
                divisor = divisor + 1

        if numPrimo == True :
            return imprimirPrimo(cont)
    

#imprimir os primos
def imprimirPrimo(np):
    print(np, end=" ")

#------------------------main-------------------------
n = pedirN()
cont = 1
while cont < n :
    res = verificarPrimo(cont)
    cont = cont + 1
