nomeatleta = str(input('Qual e o nome desse sujeito ginasta?'))
nota1 = float(input('Qual foi a nota do primeiro jurado?'))
nota2 = float(input('Qual foi a nota do segundo jurado?'))
nota3 = float(input('Qual foi a nota do terceiro jurado?'))
nota4 = float(input('Qual foi a nota do quarto jurado?'))
nota5 = float(input('Qual foi a nota do quinto jurado?'))
if (nota1 > nota2) and (nota1 > nota3) and (nota1 > nota4) and (nota1 > nota5) :
    nota_maior = nota1
elif (nota2 > nota3) and (nota2 > nota4) and (nota2 > nota5) :
    nota_maior = nota2
elif (nota3 > nota4) and (nota3 > nota5) :
    nota_maior = nota3
elif(nota4 > nota5) :
    nota_maior = nota4
else:
     nota_maior = nota5
if (nota1 < nota2) and (nota1 < nota3) and (nota1 < nota4) and (nota1 < nota5) :
    nota_menor = nota1
elif (nota2 < nota3) and (nota2 < nota4) and (nota2 < nota5) :
    nota_menor = nota2
elif (nota3 < nota4) and (nota3 < nota5) :
    nota_menor = nota3
elif (nota4 < nota5) :
     nota_menor = nota4
else:
     nota_menor = nota5
media = ((nota1 + nota2 + nota3 + nota4 + nota5) - (nota_maior - nota_menor)) / 3
print('A maior nota desse atleta foi %.2f, a menor foi %.2f e a media e %.2f'%(nota_maior,nota_menor,media))
