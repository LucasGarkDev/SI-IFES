# LISTA 2 - Ex. 5

#Faça um Programa que leia três números e mostre
# o MAIOR deles,
# o MENOR
# e mostre-os em ordem decrescente

a = int(input("a: "))
b = int(input("b: "))
c = int(input("c: "))

if a >= b and a >= c:
    maior1 = a
    if b > c:
        maior2 = b
        maior3 = c
    else:
        maior2 = c
        maior3 = b
elif b >= c:  # Já sei que o "a" não é maior, porque o ELSE só executa se a condição for FALSA
    maior1 = b
    if a > c:
        maior2 = a
        maior3 = c
    else:
        maior2 = c
        maior3 = a
else:   # Já passou por duas condições que foram FALSAS, então nem o "a" nem o "b" são os maiores
    maior1 = c
    if a > b:
        maior2 = a
        maior3 = b
    else:
        maior2 = b
        maior3 = a

print("O MAIOR número é %d" %maior1)
print("O MENOR número é %d" %maior3)
print("Ordem decrescente: %d -> %d -> %d" %(maior1, maior2, maior3) )


