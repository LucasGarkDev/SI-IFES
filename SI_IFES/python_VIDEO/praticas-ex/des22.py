# Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o 
# ,valor de H com N termos.

#inicializando
h = 1
cont = 1
numN = 1
soma = 0

#pedindo o valor da extensao de n
n = int(input("Digite o valor de N, para determinar o tamanho da sequencia: "))
while n <= 1 :
    print("Numero Invalido")
    n = int(input("Digite novamente: "))


#calculo
while cont <= n :
    calculo = h / numN
    print("A divisao de %d / %d = %.2f "%(h,numN,calculo))
    soma = soma + calculo
    numN = numN + 1
    cont = cont + 1
print("O valor de %d com %d termos equivale ao total: %.2f"%(h,n,soma))