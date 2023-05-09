nomeDoProduto = str(input('Digite o nome do produto:'))
quantidade = int(input('Quantas unidades do produto voce quer?'))
preço_do_produto = float(input('Qual e o preço do produto?'))
primeiropreço = quantidade * preço_do_produto
percentual = int(input('Digite o percentual de desconto do produto:'))
calculo_de_desconto = (primeiropreço) - (percentual * primeiropreço / 100)
print('O  produto %s recebeu %d %% de desconto'%(nomeDoProduto, percentual))
print('E o seu valor final ficou: %2.2f'%calculo_de_desconto)