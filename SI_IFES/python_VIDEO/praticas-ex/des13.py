# Faça um programa que, dado um conjunto de N números, determine o menor valor,
# o maior valor e a soma dos valores.

#pergunta 
n = int(input("Digite um numero :"))



#repetindo a pergunta
soma = 0
maiorNumero = n
menorNumero = n
while n > 0 :
    #validando o maior e menor numero:
    if n > maiorNumero :
        maiorNumero = n
    elif n < menorNumero :
        menorNumero = n
    soma = soma + n
    n = int(input("Digite um numero :"))

#leitura finally
print("O maior numero e: %d"%maiorNumero)
print("O menor numero e: %d"%menorNumero)
print("A soma dos valores e: %d"%soma)
