produto = int(input('Voce deseja comprar um produto?,insira seu codigo(1 a 40)'))
if 1 <= produto < 10 :
    preço = 10.00
if 11 <= produto < 20 :
    preço = 15.00
if 21 <= produto < 30 :
    preço = 20.00
if 31 <= produto < 40 :
    preço = 30.00
pergadicionar = str(input('Voce deseja adicionar outro produto?')).lower()
if pergadicionar == 'sim' :
 adicionar = int(input('Qual seria ele?'))
 adicionar = produto + adicionar
if adicionar <= 250 :
   desconto = adicionar - (adicionar * (5/100))
if 250 < produto <= 500 :
   desconto = adicionar - (adicionar * (10/100))
else :
    desconto = adicionar - (adicionar * (15/100))
print('O valor total do produto total e %.2f e esse mesmo valor com o desconto e %.2f'%(adicionar,desconto))