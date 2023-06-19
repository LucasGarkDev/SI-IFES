# Um número é dito perfeito quando ele é igual a soma de seus fatores. 
# Por exemplo, os fatores de 6 são 1, 2 e 3 (ou seja, podemos dividir 
# 6 por 1, por 2 e por 3) e 6=1+2+3, logo 6 é um número perfeito. 
# Escreva uma função que recebe um inteiro e dizer se é perfeito ou 
# não. Em outra função, peça um inteiro n e mostre todos os números 
# perfeitos até n.

#------------------------funçoes----------------------
#pedir o valor de n
def pedirN():
    n = int(input("Digite um numero: "))
    while n <= 0 :
        print("Esse numero nao e valido")
        n = int(input("Digite novamente: "))
    return n

#verificar se e perfeito
def verificaPerfeito(n):
    div = 1
    soma = 0
    while div < n :
        if n % div == 0:
            soma = soma + div
            if soma == n :
                return True
            elif soma > n :
                return False
        div = div + 1
    return False

#imprimir os perfeitos ate n
def perfeitoN(n):
    cont = 0
    while cont < n :  
        res = verificaPerfeito(cont)
        if res == True :
            print(cont, end=" ")  
        cont = cont + 1

#------------------------main-------------------------
def main():
    n = pedirN()
    perfeitoN(n)
main()
