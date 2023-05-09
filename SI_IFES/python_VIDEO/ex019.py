import random
num1 = input('Qual e o nome do primeiro aluno?')
num2 = input('Qual e o nome do segundo aluno?')
num3 = input('Qual e o nome do terceiro aluno?')
num4 = input('Qual e o nome do quarto aluno?')
lista = [num1, num2, num3, num4]
escoha = random.choice(lista)
print('Dentre os alunos {}, {}, {}, {}, o escohido foi {}'.format(num1, num2, num3, num4,escoha))
