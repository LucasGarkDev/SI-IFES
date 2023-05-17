produtoSelecionado = int(input('Qual foi o codigo do produto que voce deseja?'))
quantidade = int(input('Quantos exemplares desse produto voce deseja?'))
if produtoSelecionado <= 10 :
    precoUnitario = 10.00
elif produtoSelecionado <= 20 :
    precoUnitario = 15.00
elif produtoSelecionado <= 30 :
    precoUnitario = 20.00
elif produtoSelecionado <= 40 :
    precoUnitario = 30.00
else :
    print('produto nao consta no estoque')
valorTotalInicial = precoUnitario * quantidade
if valorTotalInicial <= 250.00 :
    desconto = (5/100) * valorTotalInicial
    valorTotal = valorTotalInicial - desconto
elif valorTotalInicial > 250.00 and valorTotalInicial <= 500.00 :
    desconto = (10/100) * valorTotalInicial
    valorTotal = valorTotalInicial - desconto
else :
    desconto = (15/100) * valorTotalInicial
    valorTotal = valorTotalInicial - desconto
print('O preço unitario do produto e %d, o valor total sem desconto e %d, \n o valor do desconto foi %.2f, e o valor total apos o desconto foi %.2f'%(precoUnitario,valorTotalInicial,desconto,valorTotal))
