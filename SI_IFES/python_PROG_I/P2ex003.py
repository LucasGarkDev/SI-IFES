nota1 = float(input('Qual foi a primeira nota que o aluno tirou?'))
nota2 = float(input('Qual foi a segunda nota do aluno?'))
media = (nota1 + nota2) / 2
if media >= 7 :
    print('Esse aluno esta aprovado')
elif media == 10 :
    print('Esse aluno foi aprovado com distinçao')
else :
    print('Esse aluno esta reprovado')
