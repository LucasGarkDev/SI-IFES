l = float(input('Qual e a largura da parede?(em metros):'))
h = float(input('Qual e a altura da parede?(em metros):'))
a = l * h
qt = a / 2
print('A area da parede corresponde a: {} metros, ja a quantidade de litros que voce ira gastar para pintar essa parede e..{:.3}'.format(a, qt))
