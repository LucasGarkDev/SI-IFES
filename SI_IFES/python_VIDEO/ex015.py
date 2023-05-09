nd = int(input('Voce alugou esse carro por quantos dias?:'))
kmR = float(input('Quantos quilometros(km) voce andou com esse carro?:'))
c = nd * (kmR/nd) * 5.08
print('A quantiudade de dinheiro que vc vai gastar nessa viagem e {}'.format(c))

