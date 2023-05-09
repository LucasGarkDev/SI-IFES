from random import shuffle
num1 = str(input('Qual e o nome do primeiro aluno?'))
num2 = str(input('Qual e o nome do segundo aluno?'))
num3 = str(input('Qual e o nome do terceiro aluno?'))
num4 = str(input('Qual e o nome do quarto aluno?'))
lista = [num1, num2, num3, num4]
shuffle(lista)
print('Dentre os alunos {}, {}, {}, {}, a lista de escolha foi {}'.format(num1, num2, num3, num4, lista))