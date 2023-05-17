# LISTA 2 - Ex. 3

# Faça um programa para a leitura de duas notas parciais de um aluno.
# O programa deve calcular a média alcançada por aluno e apresentar a mensagem:
# "Aprovado", se a média alcançada for maior ou igual a sete;
# "Reprovado", se a média for menor do que sete;
# "Aprovado com Distinção", se a média for igual a dez.

nota1 = float(input("Informe a nota 1: "))
if nota1 < 0 or nota1 > 10:
    print("Nota 1 invalida! A nota deve estar entre 0 e 10.")
else:
    nota2 = float(input("Informe a nota 2: "))
    if nota2 < 0 or nota2 > 10:
        print("Nota 2 invalida! A nota deve estar entre 0 e 10.")
    else:

        media = (nota1 + nota2) / 2

        if media == 10:
            print("Aprovado com Distinção: %.1f" %media)
        elif media >= 7:
            print("Aprovado: %.1f" %media)
        else:
            print("Reprovado: %.1f" %media)
    
