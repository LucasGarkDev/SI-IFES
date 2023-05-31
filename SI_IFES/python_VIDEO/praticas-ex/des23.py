# Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o 
# número do aluno e o segundo representando a sua altura em centímetros. Encontre o 
# aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e o número do 
# aluno mais baixo, junto com suas alturas.

#loop para repetir o processo 10 vezes
alunoMaisAlto = 0
maiorAltura = 0
alunoMaisBaixo = 0
menorAltura = 0
cont = 1 
while cont <= 3 :
    #pedidindo a altura e o numero de 10 alunos
    numAluno = int(input("Digite o numero do aluno: "))
    while numAluno <= 0 :
        print("Numero Invalido")
        numAluno = int(input("Digite o numero do aluno: "))

    altura = float(input("Digite o valor da altura desse aluno(min=0.30): "))
    while altura <= 0.30 :
        print("Altura Invalida")
        altura = float(input("Digite o valor da altura desse aluno(min=0.30): "))


    #descobrindo o mais alto e o mais baixo
    if altura > maiorAltura :
        maiorAltura = altura
        alunoMaisAlto = numAluno
    elif altura < menorAltura :
        menorAltura = altura
        alunoMaisBaixo = numAluno
    

    

    cont = cont + 1
print("O aluno mais alto e o %d, com uma altura de: %.2f"%(alunoMaisAlto,maiorAltura))
print("O aluno mais baixo e o %d, com uma altura de: %.2f"%(alunoMaisBaixo,menorAltura))

