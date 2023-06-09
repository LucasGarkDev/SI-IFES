# Faça um programa, usando funções, para imprimir:
#  1
#  2 2
#  3 3 3
#  .....
#  n n n n n n ... n
# para um n informado pelo usuário. Use uma função para ler e validar o valor n (inteiro e
# positivo), uma função para imprimir apenas uma linha e outra função 
# para imprimir até a nésima linha, ou seja, chamar a função “imprimir linha” n vezes.

#----------------funçoes-------------------------------
#funçao de pedir o valor de n
def pedirN() :
    n = int(input("Digite um numero: "))
    while n <= 0 :
        print("Numero invalido")
        n = int(input("Digite um numero,novamente: ")) 
    return n

#funçao de imprimir a sequencia
def imprimirSequencia(cont) :
    tent = 0
    while tent < cont:
        tent = tent + 1
        print(cont, end=" ")
        
    
#funçao para imprimir o numero
def imprimirNum(recebeN) :
    cont = 1
    while cont <= recebeN:
        imprimirSequencia(cont)
        cont = cont + 1
    return cont

#----------------main----------------------------------
def main():
    recebeN = pedirN()
    imprimirNum(recebeN)

main()