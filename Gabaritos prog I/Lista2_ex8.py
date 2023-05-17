# LISTA 2 - Ex. 8

maiorNota = 0.0     # Variável para armazenar a MAIOR nota. Começa com valor baixo.
menorNota = 11.0    # Variável para armazenar a MENOR nota. Começa com valor alto.

nome = input("Nome do atleta: ")
n1 = int(input("Nota 1: "))
n2 = int(input("Nota 2: "))
n3 = int(input("Nota 3: "))
n4 = int(input("Nota 4: "))
n5 = int(input("Nota 5: "))

# Calcular a MAIOR nota
maiorNota = n1

if n2 > maiorNota:
    maiorNota = n2

if n3 > maiorNota:
    maiorNota = n3

if n4 > maiorNota:
    maiorNota = n4

if n5 > maiorNota:
    maiorNota = n5


# Calcular a MENOR nota
menorNota = n1

if n2 < menorNota:
    menorNota = n2

if n3 < menorNota:
    menorNota = n3

if n4 < menorNota:
    menorNota = n4

if n5 < menorNota:
    menorNota = n5

media = ( n1 + n2 + n3 + n4 + n5 - maiorNota - menorNota) / 3

print("O atleta %s obteve a média: %.2f" %(nome, media) )
print("Maior nota: %.2f" %maiorNota)
print("Menor nota: %.2f" %menorNota)

