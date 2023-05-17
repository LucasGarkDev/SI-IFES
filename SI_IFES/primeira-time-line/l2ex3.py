# Faça um programa para a leitura de duas notas parciais de um aluno. Oprogramadevecalcular a 
# média alcançada por aluno e apresentar a mensagem: 
# ­ "Aprovado", se a média alcançada for maior ou igual a sete; ­
# "Reprovado", se a média for menor do que sete; 
# ­ "Aprovado com Distinção", se a média for igual a dez.

nota1 = float(input('Digite a primeira nota do aluno:'))
if nota1 < 0 or nota1 > 10 :
    print('Isso esta errado, a nota so vai de 0 a 10')
else:
    nota2 = float(input('Digite a segunda nota do aluno:'))
    if nota2 < 0 or nota1 > 10 :
        print('Isso esta errado, a nota so vai de 0 a 10')
    else:
        media = (nota1 + nota2) / 2
        if media == 10 :
            print('O aluno foi Aprovado com Distinçao')
        elif media >= 7 :
            print('O aluno foi Aprovado')
        else :
            print('O aluno foi Reprovado')
