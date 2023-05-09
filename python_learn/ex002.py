n1 = input('Qual e o primeiro numero?:')
n2 = input('Qual e o segundo numero que vc quer somar com esse?:')
soma = int(n1) + int(n2)
print('A soma dos numeros e igual a..', soma)

t = input('Digite algo:')
print(t.isalnum())

n3 = int(input('Qual o primeiro numero da subtraçao?:'))
n4 = int(input('Qual e o segundo numero da subtraçao?:'))
subtraçao = n3-n4
#print('A subtraçao entre', n3, 'e', n4, 'igual a...', subtraçao)
print('A subtraçao entre {} e {} sera {}'.format(n3,n4,subtraçao))

massa = float(input('Qual e a sua massa?'))
gravidade = float(input('Qual e o valor da gravidade no planeta que vc esta?'))
peso = massa+gravidade
print('A soma de seu peso e...', peso)

a1 = bool(input('voce acha que esta vivo?'))
a2 = bool(input('Voce esta se comportando como um ser vivo?'))

print('Nesse caso voce e...{}'.format(a1))
