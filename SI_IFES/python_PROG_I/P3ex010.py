#Gabaritos
pontos = 0
cont = 1
maisUmAluno = "S"
somaNotas = 0
maiorNota = 0
menorNota = 11
contQuestao = 1
contAlunos = 0

#pedir o gabarito
gab1 = str(input("Qual foi o gabarito (A/B/C/D/E) da questão 1: ")).upper()
while gab1 != "A" and gab1 != "B" and gab1 != "C" and gab1 != "D" and gab1 != "E":
    print("Esse gabarito está errado")
    gab1 = str(input("Qual foi o gabarito (A/B/C/D/E) da questão 1: ")).upper()

      

gab2 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 2: ")).upper()
while gab2 != "A" and gab2 != "B" and gab2 != "C" and gab2 != "D" and gab2 != "E" :
    print("Esse gabarito esta errado")
    gab2 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 2: ")).upper()
   


gab3 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 3: ")).upper()
while gab3 != "A" and gab3 != "B" and gab3 != "C" and gab3 != "D" and gab3 != "E" :
    print("Esse gabarito esta errado")
    gab3 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 3: ")).upper()
    
   

gab4 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 4: ")).upper()
while gab4 != "A" and gab4 != "B" and gab4 != "C" and gab4 != "D" and gab4 != "E" :
    print("Esse gabarito esta errado")
    gab4 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 4: ")).upper()
    
       

gab5 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 5: ")).upper()
while gab5 != "A" and gab5 != "B" and gab5 != "C" and gab5 != "D" and gab5 != "E" :
    print("Esse gabarito esta errado")
    gab5 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 5: ")).upper()
    
      

gab6 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 6: ")).upper()
while gab6 != "A" and gab6 != "B" and gab6 != "C" and gab6 != "D" and gab6 != "E" :
    print("Esse gabarito esta errado")
    gab6 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 6: ")).upper()
    
       

gab7 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 7: ")).upper()
while gab7 != "A" and gab7 != "B" and gab7 != "C" and gab7 != "D" and gab7 != "E" :
    print("Esse gabarito esta errado")
    gab7 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 7: ")).upper()
    
        

gab8 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 8: ")).upper()
while gab8 != "A" and gab8 != "B" and gab8 != "C" and gab8 != "D" and gab8 != "E" :
    print("Esse gabarito esta errado")
    gab8 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 8: ")).upper()
    
       

gab9 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 9: ")).upper()
while gab9 != "A" and gab9 != "B" and gab9 != "C" and gab9 != "D" and gab9 != "E" :
    print("Esse gabarito esta errado")
    gab9 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 9: ")).upper()


gab10 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 10: ")).upper()
while gab10 != "A" and gab10 != "B" and gab10 != "C" and gab10 != "D" and gab10 != "E" :
    print("Esse gabarito esta errado")
    gab10 = str(input("Qual foi o gabarito(A/B/C/D/E) da questao 10: ")).upper()
    

while maisUmAluno == "S" and cont <= 10 :
    #funçao para definir a pontuaçao do aluno
    alternativaMarcada = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada != "A" and alternativaMarcada != "B" and alternativaMarcada != "C" and alternativaMarcada != "D" and alternativaMarcada != "E" :
        print("Resposta invalida")
        alternativaMarcada = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada == gab1 :
        pontos = pontos + 1

    alternativaMarcada2 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada2 != "A" and alternativaMarcada2 != "B" and alternativaMarcada2 != "C" and alternativaMarcada2 != "D" and alternativaMarcada2 != "E" :
        print("Resposta invalida")
        alternativaMarcada2 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada2 == gab2 :
        pontos = pontos + 1

    alternativaMarcada3 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada3 != "A" and alternativaMarcada3 != "B" and alternativaMarcada3 != "C" and alternativaMarcada3 != "D" and alternativaMarcada3 != "E" :
        print("Resposta invalida")
        alternativaMarcada3 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada3 == gab3 :
        pontos = pontos + 1

    alternativaMarcada4 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada4 != "A" and alternativaMarcada4 != "B" and alternativaMarcada4 != "C" and alternativaMarcada4 != "D" and alternativaMarcada4 != "E" :
        print("Resposta invalida")
        alternativaMarcada4 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada4 == gab4 :
        pontos = pontos + 1
    
    alternativaMarcada5 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada5 != "A" and alternativaMarcada5 != "B" and alternativaMarcada5 != "C" and alternativaMarcada5 != "D" and alternativaMarcada5 != "E" :
        print("Resposta invalida")
        alternativaMarcada5 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada5 == gab5 :
        pontos = pontos + 1

    alternativaMarcada6 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada6 != "A" and alternativaMarcada6 != "B" and alternativaMarcada6 != "C" and alternativaMarcada6 != "D" and alternativaMarcada6 != "E" :
        print("Resposta invalida")
        alternativaMarcada6 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada6 == gab6 :
        pontos = pontos + 1

    alternativaMarcada7 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada7 != "A" and alternativaMarcada7 != "B" and alternativaMarcada7 != "C" and alternativaMarcada7 != "D" and alternativaMarcada7 != "E" :
        print("Resposta invalida")
        alternativaMarcada7 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada7 == gab7 :
        pontos = pontos + 1

    alternativaMarcada8 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada8 != "A" and alternativaMarcada8 != "B" and alternativaMarcada8 != "C" and alternativaMarcada8 != "D" and alternativaMarcada8 != "E" :
        print("Resposta invalida")
        alternativaMarcada8 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada8 == gab8 :
        pontos = pontos + 1

    alternativaMarcada9 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada9 != "A" and alternativaMarcada9 != "B" and alternativaMarcada9 != "C" and alternativaMarcada9 != "D" and alternativaMarcada9 != "E" :
        print("Resposta invalida")
        alternativaMarcada9 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada9 == gab9 :
        pontos = pontos + 1

    alternativaMarcada10 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    while alternativaMarcada10 != "A" and alternativaMarcada10 != "B" and alternativaMarcada10 != "C" and alternativaMarcada10 != "D" and alternativaMarcada10 != "E" :
        print("Resposta invalida")
        alternativaMarcada10 = str(input("Digite a alternativa marcada pelo aluno: ")).upper()
    if alternativaMarcada10 == gab10 :
        pontos = pontos + 1

    print("A nota que ele tirou foi: %d"%pontos)
    cont = 0
    nota = pontos

    if nota >= maiorNota:
        maiorNota = nota
    if nota <= menorNota:
        menorNota = nota

    somaNotas = somaNotas + nota
    contAlunos = contAlunos + 1
    maisUmAluno = str(input("Deseja registrar outro aluno(S/N): ")).upper()

print("A maior nota da turma foi: %d" % maiorNota)
print("A menor nota da turma foi: %d" % menorNota)
print("O número de alunos que usaram o sistema foi: %d" % contAlunos)
mediaNotas = somaNotas / contAlunos
print("A média das notas dessa turma foi: %.2f" % mediaNotas)
