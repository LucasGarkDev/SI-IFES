nome = input('Qual e o seu nome?')
print('Prazer {}, o meu nome e Cortana!'.format(nome))

sobrenome = input('Qual seria o seu sobrenome?')
print('ahh...... entao esse e o seu nome completo:{:=^50}{}'.format(nome,sobrenome))

n1 = int(input('digite um numero:'))
n2 = int(input('Digite outro numero:'))
s = n1 + n2
m = n1 * n2
sb = n1 - n2
d = n1 / n2
di = n1 // n2
p = n1 ** n2
r = n1 % n2
print('As operaçoes dos numeros {} e {} sao: \n Soma:{}, \n Produto:{}, \n Divisao:{:.2f},'.format(n1, n2, s, m, d), end=' ')
print('\n Subtraçao:{},\n Divisao inteira:{},\n Potencia:{},\n Resto da divisao:{}'.format(sb, di, p, r))

