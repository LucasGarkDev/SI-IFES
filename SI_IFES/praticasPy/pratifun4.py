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
def perfeito(m,n):
    if m % n == 0 :
        print(m)
    
        

#funçao compara soma
def comparaSoma(comparador,referencial):
    

        

#funçao compara se divide
def comparaDivisao(comparador,referencial):
    

#funçao para imprimir os perfeitos ate n



#------------------------main-------------------------
n = pedirN()
cont = 1
while cont < n :
    perfeito(cont,n)
    cont = cont + 1