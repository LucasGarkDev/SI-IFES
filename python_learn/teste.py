n1 = float(input('Digite o primeiro numero:'))
n2 = float(input('Digite o segundo numero:'))
s = n1 + n2
print('A soma entre {} e {} sera {}'.format(n1, n2, s))

ndeseja = input('Digite algo para analisar-mos o tipo primitivo e ')
print(type(ndeseja))
print(ndeseja.isprintable())
print(ndeseja.isupper())
print(ndeseja.isalnum())