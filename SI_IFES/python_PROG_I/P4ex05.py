# O número de combinações possíveis de m elementos em grupos de n elementos 
# (n <= m) é dada pela fórmula de combinação 
# m! / ( (m-n)! . n!).
# Escreva um programa que lê dois inteiros m e n e 
# calcula a combinação de m, n a n. Crie
# uma função para calcular o fatorial e chame essa função várias vezes.
#---------------funçoes-----------------
#funçao para pedir um numero n
def pedirN(m) :
    n = int(input("Digite um numero: "))
    while n <= 0 or n >= m:
        print("Numero invalido")
        n = int(input("Digite um numero,novamente: ")) 
    return n

#funçao para pedir um numero m
def pedirM() :
    m = int(input("Digite um numero: "))
    while m <= 0 :
        print("Numero invalido")
        m = int(input("Digite um numero,novamente: ")) 
    return m

#funçao para fazer o fatorial
def fatorial(m) :
    fat = 1
    while m > 1 :
        fat = fat * m
        m = m - 1
    return fat

#funçao para fazer as probabilidades
def probabilidades(n,m):
    res = fatorial(m)
    calculo1 = m - n
    res2 = fatorial(calculo1)
    res3 = fatorial(n)
    final = res / (res2 * res3)
    return final




#---------------main--------------------
def main():
    recebeM = pedirM()
    recebeN = pedirN(recebeM)
    final = probabilidades(recebeN,recebeM)
    print("O resultado das combinaçoes de %d e %d sao: %d"%(recebeM,recebeN,final))

main()