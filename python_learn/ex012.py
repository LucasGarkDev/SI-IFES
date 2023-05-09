preçoor = float(input('Quanto custa o produto que voce quer comprar?:'))
p = preçoor * (5/100)
d = preçoor - p
print('O preço do produto que voce quer comprar custa:{} , porem com 5% de desconto ele passa para:{:.5}'.format(preçoor, d))
