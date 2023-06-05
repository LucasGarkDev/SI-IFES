# Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões
# de múltipla escolha. Primeiro leia e valide (de “A” até “E”) o gabarito de cada questão e
# armazene em 10 variáveis (por exemplo, gab1, gab2, etc.). Em seguida, o programa deve
# perguntar ao aluno a resposta de cada questão e comparar com o gabarito da prova e
# assim calcular o total de acertos e a nota (atribuir 1 ponto por resposta certa). Após cada
# aluno utilizar o sistema deve ser feita uma pergunta se outro aluno vai utilizar o sistema.
# Após todos os alunos terem respondido informar:
# a. A maior e a menor nota;
# b. O total de alunos que utilizaram o sistema;
# c. A média das notas da turma. 

#inicializaçao
pontos = 0
outroAluno = "SIM"
contAlunos = 0
maiorNota = 1
menorNota = 1 
somaNotas = 0

#pedir o gabarito
print("As altenativas da prova sao apenas(A/B/C/D e E)")
gab1 = str(input("Digite o gabarito da questão 1: ")).upper()
while gab1 != "A" and gab1 != "B" and gab1 != "C" and gab1 != "D" and gab1 != "E" :
    print("Gabarito Invalido")
    gab1 = str(input("Digite o gabarito da questão 1: ")).upper()

gab2 = str(input("Digite o gabarito da questão 2: ")).upper()
while gab2 != "A" and gab2 != "B" and gab2 != "C" and gab2 != "D" and gab2 != "E" :
    print("Gabarito Invalido")
    gab2 = str(input("Digite o gabarito da questão 2: ")).upper()

gab3 = str(input("Digite o gabarito da questão 3: ")).upper()
while gab3 != "A" and gab3 != "B" and gab3 != "C" and gab3 != "D" and gab3 != "E" :
    print("Gabarito Invalido")
    gab3 = str(input("Digite o gabarito da questão 3: ")).upper()

gab4 = str(input("Digite o gabarito da questão 4: ")).upper()
while gab4 != "A" and gab4 != "B" and gab4 != "C" and gab4 != "D" and gab4 != "E" :
    print("Gabarito Invalido")
    gab4 = str(input("Digite o gabarito da questão 4: ")).upper()

gab5 = str(input("Digite o gabarito da questão 5: ")).upper()
while gab5 != "A" and gab5 != "B" and gab5 != "C" and gab5 != "D" and gab5 != "E" :
    print("Gabarito Invalido")
    gab5 = str(input("Digite o gabarito da questão 5: ")).upper()

gab6 = str(input("Digite o gabarito da questão 6: ")).upper()
while gab6 != "A" and gab6 != "B" and gab6 != "C" and gab6 != "D" and gab6 != "E" :
    print("Gabarito Invalido")
    gab6 = str(input("Digite o gabarito da questão 6: ")).upper()

gab7 = str(input("Digite o gabarito da questão 7: ")).upper()
while gab7 != "A" and gab7 != "B" and gab7 != "C" and gab7 != "D" and gab7 != "E" :
    print("Gabarito Invalido")
    gab7 = str(input("Digite o gabarito da questão 7: ")).upper()

gab8 = str(input("Digite o gabarito da questão 8: ")).upper()
while gab8 != "A" and gab8 != "B" and gab8 != "C" and gab8 != "D" and gab8 != "E" :
    print("Gabarito Invalido")
    gab8 = str(input("Digite o gabarito da questão 8: ")).upper()

gab9 = str(input("Digite o gabarito da questão 9: ")).upper()
while gab9 != "A" and gab9 != "B" and gab9 != "C" and gab9 != "D" and gab9 != "E" :
    print("Gabarito Invalido")
    gab9 = str(input("Digite o gabarito da questão 9: ")).upper()

gab10 = str(input("Digite o gabarito da questão 10: ")).upper()
while gab10 != "A" and gab10 != "B" and gab10 != "C" and gab10 != "D" and gab10 != "E" :
    print("Gabarito Invalido")
    gab10 = str(input("Digite o gabarito da questão 1: ")).upper()


#pedir as alternativas de cada aluno
while outroAluno == "SIM" :
    altMarcada1 = str(input("Digite a alternativa marcada na questao 1: ")).upper()
    while altMarcada1 != "A" and altMarcada1 != "B" and altMarcada1 != "C" and altMarcada1 != "D" and altMarcada1 != "E" :
        print("Alternativa invalida")
        altMarcada1 = str(input("Digite a alternativa marcada na questao 1: ")).upper()
    if altMarcada1 == gab1 : 
        pontos = pontos + 1

    altMarcada2 = str(input("Digite a alternativa marcada na questão 2: ")).upper()
    while altMarcada2 != "A" and altMarcada2 != "B" and altMarcada2 != "C" and altMarcada2 != "D" and altMarcada2 != "E":
        print("Alternativa inválida")
        altMarcada2 = str(input("Digite a alternativa marcada na questão 2: ")).upper()
    if altMarcada2 == gab2:
        pontos = pontos + 1

    altMarcada3 = str(input("Digite a alternativa marcada na questão 3: ")).upper()
    while altMarcada3 != "A" and altMarcada3 != "B" and altMarcada3 != "C" and altMarcada3 != "D" and altMarcada3 != "E":
        print("Alternativa inválida")
        altMarcada3 = str(input("Digite a alternativa marcada na questão 3: ")).upper()
    if altMarcada3 == gab3:
        pontos = pontos + 1

    altMarcada4 = str(input("Digite a alternativa marcada na questão 4: ")).upper()
    while altMarcada4 != "A" and altMarcada4 != "B" and altMarcada4 != "C" and altMarcada4 != "D" and altMarcada4 != "E":
        print("Alternativa inválida")
        altMarcada4 = str(input("Digite a alternativa marcada na questão 4: ")).upper()
    if altMarcada4 == gab4:
        pontos = pontos + 1

    altMarcada5 = str(input("Digite a alternativa marcada na questão 5: ")).upper()
    while altMarcada5 != "A" and altMarcada5 != "B" and altMarcada5 != "C" and altMarcada5 != "D" and altMarcada5 != "E":
        print("Alternativa inválida")
        altMarcada5 = str(input("Digite a alternativa marcada na questão 5: ")).upper()
    if altMarcada5 == gab5:
        pontos = pontos + 1

    altMarcada6 = str(input("Digite a alternativa marcada na questão 6: ")).upper()
    while altMarcada6 != "A" and altMarcada6 != "B" and altMarcada6 != "C" and altMarcada6 != "D" and altMarcada6 != "E":
        print("Alternativa inválida")
        altMarcada6 = str(input("Digite a alternativa marcada na questão 6: ")).upper()
    if altMarcada6 == gab6:
        pontos = pontos + 1

    altMarcada7 = str(input("Digite a alternativa marcada na questão 7: ")).upper()
    while altMarcada7 != "A" and altMarcada7 != "B" and altMarcada7 != "C" and altMarcada7 != "D" and altMarcada7 != "E":
        print("Alternativa inválida")
        altMarcada7 = str(input("Digite a alternativa marcada na questão 7: ")).upper()
    if altMarcada7 == gab7:
        pontos = pontos + 1

    altMarcada8 = str(input("Digite a alternativa marcada na questão 8: ")).upper()
    while altMarcada8 != "A" and altMarcada8 != "B" and altMarcada8 != "C" and altMarcada8 != "D" and altMarcada8 != "E":
        print("Alternativa inválida")
        altMarcada8 = str(input("Digite a alternativa marcada na questão 8: ")).upper()
    if altMarcada8 == gab8:
        pontos = pontos + 1

    altMarcada9 = str(input("Digite a alternativa marcada na questão 9: ")).upper()
    while altMarcada9 != "A" and altMarcada9 != "B" and altMarcada9 != "C" and altMarcada9 != "D" and altMarcada9 != "E":
        print("Alternativa inválida")
        altMarcada9 = str(input("Digite a alternativa marcada na questão 9: ")).upper()
    if altMarcada9 == gab9:
        pontos = pontos + 1

    altMarcada10 = str(input("Digite a alternativa marcada na questão 10: ")).upper()
    while altMarcada10 != "A" and altMarcada10 != "B" and altMarcada10 != "C" and altMarcada10 != "D" and altMarcada10 != "E":
        print("Alternativa inválida")
        altMarcada10 = str(input("Digite a alternativa marcada na questão 10: ")).upper()
    if altMarcada10 == gab10:
        pontos = pontos + 1
    
    #maior e menor nota
    if nota > maiorNota :
        maiorNota = nota
    if nota < menorNota :
        menorNota = nota

    nota = pontos
    somaNotas = somaNotas + nota

    outroAluno = str(input("Voce deseja avaliar outro aluno?")).upper()
    contAlunos = contAlunos + 1

#media da turma
media = somaNotas / contAlunos

#leitura final
print("A maior nota e: %d"%maiorNota)
print("A menor nota e: %d"%menorNota)
print("O total de alunos que usaram o sistema foi %d"%contAlunos)
print("A media da turma e: %.2f"%media)