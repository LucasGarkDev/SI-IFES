# Faça um programa, usando funções, para imprimir:
#  1
#  1 2
#  1 2 3
#  .....
#  1 2 3 4 ... n
# para um n informado pelo usuário. Use uma função para ler 
# e validar o valor n (inteiro e
# positivo), uma função para imprimir apenas uma 
# linha e outra função para imprimir até a nésima 
# linha, ou seja, chamar a função “imprimir linha” n vezes.

#----------------funçoes-------------------------------------
#funçao de pedir o valor de n
def pedirN() :
    n = int(input("Digite um numero: "))
    while n <= 0 :
        print("Numero invalido")
        n = int(input("Digite um numero,novamente: ")) 
    return n

#funçao imprimir linha
def imprimirLinha(cont) :
    tent = 1
    while tent <= cont :
        print(tent, end=" ")
        tent = tent + 1


#funçao para imprimir ate a nesima linha
def imprimirNesima(n) :
    cont = 1
    while cont <= n :
        imprimirLinha(cont)
        cont = cont + 1
    

#----------------main----------------------------------------
def main() :
    recebeN = pedirN()
    imprimirNesima(recebeN)

main()
