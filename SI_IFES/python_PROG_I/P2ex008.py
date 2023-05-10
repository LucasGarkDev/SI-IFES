import math
nomeatleta = str(input('Qual e o nome desse sujeito ginasta?'))
nota1 = float(input('Qual foi a nota do primeiro jurado?'))
nota2 = float(input('Qual foi a nota do segundo jurado?'))
nota3 = float(input('Qual foi a nota do terceiro jurado?'))
nota4 = float(input('Qual foi a nota do quarto jurado?'))
nota5 = float(input('Qual foi a nota do quinto jurado?'))
if nota1 > nota2 and nota3 and nota4 and nota5 :
    nota_maior = nota1
if nota2 > nota1 and nota3 and nota4 and nota5 :
    nota_maior = nota2
if nota3 > nota2 and nota1 and nota4 and nota5 :
    nota_maior = nota3
if nota4 > nota2 and nota3 and nota1 and nota5 :
    nota_maior = nota4
if nota5 > nota2 and nota3 and nota4 and nota1 :
    nota_maior = nota5
if nota1 < nota2 and nota3 and nota4 and nota5 :
    nota_menor = nota1
if nota2 < nota1 and nota3 and nota4 and nota5 :
    nota_menor = nota2
if nota3 < nota2 and nota1 and nota4 and nota5 :
    nota_menor = nota3
if nota4 < nota2 and nota3 and nota1 and nota5 :
    nota_menor = nota4
if nota5 < nota2 and nota3 and nota4 and nota1 :
    nota_menor = nota5
notas = [nota1, nota2, nota3, nota4, nota5]
retirando = notas - nota_maior - nota_menor
media = sum(notas) / len(notas)
print('A maior nota desse atleta foi %.2f, a menor foi %.2f e a media e %f'%(nota_maior,nota_menor,media))
