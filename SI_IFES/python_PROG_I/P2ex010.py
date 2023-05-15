idade = int(input('Qual e a sua idade meu bom(a) senhor(a)?'))
peso = float(input('Qual e o seu peso atual?Em kilogramas por gentileza'))
if idade >= 12 and peso >= 60 :
    gotas = 40
elif idade >= 12 and peso < 60 :
    gotas = 35
elif idade < 12 and peso < 5 :
    print('Sinto lhe informar mais voce esta morrendo fi...')
elif idade < 12 and peso <= 9 :
    gotas = 5
elif idade < 12 and peso <= 16 :
    gotas = 10
elif idade < 12 and peso <= 24 :
    gotas = 15
elif idade < 12 and peso <= 30 :
    gotas = 20
else :
    gotas = 30
print('O(a) senhor(a) devera tomar %d gotas do medicamento nas horas de medicaçao'%gotas)