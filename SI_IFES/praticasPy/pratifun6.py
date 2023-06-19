# A série de Fibonacci é uma sequência de números, cujos dois primeiros 
# são 0 e 1. O termo seguinte da sequência é obtido somando os dois 
# anteriores. Faça uma script em Python que solicite um inteiro 
# positivo ao usuário, n. Então uma função exibe todos os termos da 
# sequência até o n-ésimo termo. Use recursividade.

#------------------------funçoes----------------------
#pedir o tamanho da sequencia
def pedirN():
    n = int(input("Digite um numero: "))
    while n <= 0 :
        print("Esse numero nao e valido")
        n = int(input("Digite novamente: "))
    return n

#execussao da sequencia
def sequencia(n):
    n1 = 0
    n2 = 1
    proxN = n1 + n2
    print(n1,n2,proxN, end=" ")
    if n > 3 :
        cont = 3
        while cont < n :
            n1 = n2
            n2 = proxN
            proxN = n1 + n2
            print(proxN, end=" ")
            cont = cont + 1
        


#------------------------main-------------------------
def main():
    num = pedirN()
    sequencia(num)
main()