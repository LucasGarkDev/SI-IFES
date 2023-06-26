# Faça um programa que peça para n pessoas a sua idade, ao final o 
# programa devera verificar se a média de idade da turma varia entre 
# 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, 
# adulta ou idosa, conforme a média calculada.

#inicializaçao
numPessoas = 1
somaIdade = 0

#perguntar a quantidade de pessoas
n = int(input("Digite o numero de pessoas da turma: "))
while n <= 0 :
    print("Uma turma sem nenhum aluno....estranho!?")
    n = int(input("Digite o numero de pessoas da turma: "))

#pedir para as pessoas a sua idade
idade = int(input("Digite a idade de um dos alunos da turma: "))
while idade <= 0 :
    print("Idade nao compativel")
    idade = int(input("Digite a idade de um dos alunos da turma: "))
somaIdade = somaIdade + idade
while numPessoas <= (n-1) :
    idade = int(input("Digite a idade de outro dos alunos da turma: "))
    while idade <= 0 :
        print("Idade nao compativel")
        idade = int(input("Digite a idade de outro dos alunos da turma: ")) 
    somaIdade = somaIdade + idade
    numPessoas = numPessoas + 1

#media da idade
media =  somaIdade / numPessoas

#definir se a turma e jovem, adulta ou idosa
if media <= 25 :
    print("Essa turma de %d alunos e uma turma jovem"%numPessoas)
elif media <=60 :
    print("Essa turma de %d alunos e uma turma adulta"%numPessoas)
else :
    print("Essa turma de %d alunos e uma turma idosa"%numPessoas)