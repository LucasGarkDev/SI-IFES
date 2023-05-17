#Façaa um programa que peça o nome do aluno e suas 4 notas bimestrais e
# mostre o nome do aluno e a média

nome = input("Nome do aluno: ")
n1 = float(input("Nota 1: "))
n2 = float(input("Nota 2: "))
n3 = float(input("Nota 3: "))
n4 = float(input("Nota 4: "))

media = ((n1 + n2 + n3 + n4)/4)

print("A média das notas do aluno %s é: %.2f" %(nome, media) )
