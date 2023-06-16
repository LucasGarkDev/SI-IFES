# Faça um programa, usando funções, para imprimir:
#  1
#  2 2
#  3 3 3
#  .....
#  n n n n n n ... n
# para um n informado pelo usuário. Use uma função para ler e validar o 
#valor n (inteiro e
# positivo), uma função para imprimir apenas uma linha e outra função 
# para imprimir até a nésima linha, ou seja, chamar a função 
#“imprimir linha” n vezes.

#----------------funçoes-------------------------------
#funçao para pedir n
def pedirN():
    n = int(input("Digite o numero do tamanho da sequencia: "))
    while n < 0 :
        print("Numero Invalido")
        n = int(input("Digite novamente: "))
    return n

#funçao para imprimir linha
def imprimirLinha(quantLinha):
    cont = 0 
    while cont < quantLinha :
        print(quantLinha, end=" ")
        cont = cont + 1

#funçao para imprimir a nesima linha
def imprimirNesima(n):
    cont = 1
    while cont <= n:
        imprimirLinha(cont)
        print(" "*30)
        cont = cont + 1
#----------------main----------------------------------
def main() :
    n = pedirN()
    imprimirNesima(n)
main()