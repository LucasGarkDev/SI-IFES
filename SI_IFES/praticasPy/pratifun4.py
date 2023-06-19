# Um número é dito perfeito quando ele é igual a soma de seus fatores. 
# Por exemplo, os fatores de 6 são 1, 2 e 3 (ou seja, podemos dividir 
# 6 por 1, por 2 e por 3) e 6=1+2+3, logo 6 é um número perfeito. 
# Escreva uma função que recebe um inteiro e dizer se é perfeito ou 
# não. Em outra função, peça um inteiro n e mostre todos os números 
# perfeitos até n.

#------------------------funçoes----------------------
#funçao para pedir o n
def pedirN():
    n = int(input("Digite um numero: "))
    while n < 0 :
        print("Numero Invalido")
        n = int(input("Digite um numero,novamente: "))
    return n

#funçao compara se ele e perfeito ou nao
def perfeito(n):
    c = 1
    a = 0
    while c < n :
        if n % c == 0:
            a = a + c
            if a == n :
                return True
            elif a > n :
                return False
        c = c + 1
    return False    

#funçao para imprimir os perfeitos ate n
def perfeitosAteN(n):
    cont = 1
    while cont <= n :
        p = perfeito(cont)
        if p == True :
            print(cont)
        cont = cont + 1
    
#------------------------main-------------------------
def main():
    n = pedirN()
    perfeitosAteN(n)
main()
