# O número de combinações possíveis de m elementos em grupos de n elementos 
# (n <= m) é dada pela fórmula de combinação 
# m! / ( (m-n)! . n!).
# Escreva um programa que lê dois inteiros m e n e 
# calcula a combinação de m, n a n. Crie
# uma função para calcular o fatorial e chame essa função várias vezes.
#---------------funçoes-----------------
#funçao pedir m
def pedirM():
    m = int(input("Digite um numero para m: "))
    while m <= 0 :
        print("Numero Invalido")
        m = int(input("Digite um numero para m: "))
    return m

#funçao pedir n
def pedirN(m):
    n = int(input("Digite um numero para n: "))
    while n <= 0 or n > m:
        print("Numero Invalido")
        n = int(input("Digite um numero para n,novamente: "))
    return n

#funçao fatorial
def fatorial(num):
    fat = 1
    while num > 1:
       fat = fat * num
       num = num - 1
    return fat

#funçao combinaçao
def combinacao(n,m):
    res1 = fatorial(m)
    cal = m - n
    res2 = fatorial(cal)
    res3 = fatorial(n)
    comb = res1 / (res2 * res3)
    return comb

#---------------main--------------------
def main():
    m = pedirM()
    n = pedirN(m)
    r = combinacao(n,m)
    print("O resultado da combinaçao de %d e %d é: %.2f "%(n,m,r))
main()