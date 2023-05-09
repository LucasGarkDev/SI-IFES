nomeAluno = str(input('Qual e o nome do aluno:'))
nota1 = float(input('Insira a primeira nota:'))
nota2 = float(input('Insira a segunda nota:'))
nota3 = float(input('Insira a terceira nota:'))
nota4 = float(input('Insira a quarta nota:'))
media = (nota1 + nota2 + nota3 + nota4) / 4
print('O valora da nota do aluno %s , com as notas: %2.2f,%2.2f,%2.2f,%2.2f'%(nomeAluno, nota1, nota2, nota3, nota4))
print('totalizando uma media de %2.2f'%media)