# Faça um programa para ler o nome do aluno e suas três notas. 
# Valide cada nota. Calcule a média final do aluno e imprima: 
# “APROVADO” se a média for maior ou igual a 7;
# “REPROVADO” se a média for menor que 6;
# e “PROVA FINAL” se a média estiver entre 6
# e 7. Imprima também as notas na ordem decrescente.

#pedir o nome
nome = str(input("Digite o nome do aluno: "))
print("O nome do Aluno e: %s"%nome)

#pedir e validar as notas
nota1 = float(input("Digite a primeira nota desse aluno: "))
while nota1 < 0 or nota1 > 10.00 :
    print("Nota Invalida")
    nota1 = float(input("Digite a primeira nota desse aluno: "))
nota2 = float(input("Digite a segunda nota desse aluno: "))
while nota2 < 0 or nota2 > 10.00 :
    print("Nota Invalida")
    nota2 = float(input("Digite a segunda nota desse aluno: "))
nota3 = float(input("Digite a terceira nota desse aluno: "))
while nota3 < 0 or nota3 > 10.00 :
    print("Nota Invalida")
    nota3 = float(input("Digite a terceira nota desse aluno: "))

#calcular a media 
media = (nota1 + nota2 + nota3) / 3
if media >= 7 :
    print("Esse aluno foi Aprovado!")
elif media >= 6 :
    print("Esse aluno esta de Prova Final!")
else :
    print("Esse aluno esta Reprovado!")
print("A media desse aluno foi %.2f"%media)

#verificaçao de qual e a maior nota
maiorNota = nota1
if nota2 > maiorNota :
    maiorNota = nota2
elif nota3 > maiorNota :
    maiorNota = nota3
else :
    maiorNota = nota1
menorNota = nota1 
if nota2 < menorNota :
    menorNota = nota2
elif nota3 < menorNota :
    menorNota = nota3
else :
    menorNota = nota1
segundaMaiorNota = nota1
if nota2 > menorNota and nota2 < maiorNota :
    segundaMaiorNota = nota2
elif nota3 > menorNota and nota3 < maiorNota :
    segundaMaiorNota = nota3
else :
    segundaMaiorNota = nota1
print("A ordem decrescente das notas desse aluno e:")
print("%.2f, %.2f, %.2f"%(maiorNota,segundaMaiorNota,menorNota))
