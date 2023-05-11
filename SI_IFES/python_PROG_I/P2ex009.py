produto = int(input('Voce deseja comprar um produto?,insira seu codigo(1 a 40)'))
if produto <= 10 :
    preço = 10.00
    preco = 10.00
elif produto <= 20 :
    preço = 15.00
    preco = 15.00
elif produto <= 30 :
    preço = 20.00
    preco = 20.00
elif produto < 40 :
    preço = 30.00
pergadicionar = str(input('Voce deseja adicionar outro produto?')).lower()
if pergadicionar == 'sim' :
    adicionar = int(input('Qual seria ele?'))
    adicionar = produto + adicionar
elif pergadicionar == 'nao':
    print('Entao vou calcular o desconto')
adicionar = preço
if adicionar <= 250 :
    desconto = adicionar - (adicionar * (5/100))
    preco = 30.00

quant = int(input('QUnatos exemplares voce deseja desse produto?'))
finalPreco = preco * quant
if finalPreco <= 250 :
    desconto = finalPreco - (finalPreco * (5/100))
elif produto <= 500 :
    desconto = adicionar - (adicionar * (10/100))
    desconto = finalPreco - (finalPreco * (10/100))
else :
    desconto = adicionar - (adicionar * (15/100))
    desconto = finalPreco - (finalPreco * (15/100))
print('O valor total do produto total e %.2f e esse mesmo valor com o desconto e %.2f'%(adicionar,desconto))