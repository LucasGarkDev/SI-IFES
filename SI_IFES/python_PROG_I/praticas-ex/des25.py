#inicializaçao
contProd = 1
contPreco = 1
soma = 0

#pedir o numero de produtos
quantProdutos = int(input("Digite a quantidade de produtos que voce deseja comprar: "))
while quantProdutos <= 0 :
    pergunta = str(input("Entao esta apenas olhando ou quer comprar algo(quero/nao)")).upper()
    if pergunta == "QUERO":
        quantProdutos = int(input("Digite a quantidade de produtos que voce deseja comprar: "))
    else :
        print("Compra encerrada")


#loop para dizer o preço de todos os procutos
while contPreco <= quantProdutos :

    #pedir os preços dos produtos 
    precoProduto = float(input("Digite o preço do produto: "))
    while precoProduto <= 0 :
        print("Preço Invalido")
        precoProduto = float(input("Digite o preço do produto, novamente: "))
    soma = soma + precoProduto
    print("O produto %d e: %.2f"%(contPreco,precoProduto))
    contPreco = contPreco + 1

# #loop para dizer o preço de todos os procutos, caso o quebrador seja 0 ou -1
# while contPreco < 0 :

#     #pedir os preços dos produtos 
#     precoProduto = float(input("Digite o preço do produto: "))
#     if precoProduto < 0 :
#         soma = soma + 1
#         print("O produto %d e: %.2f"%(contPreco,precoProduto))
#     else :
#         soma = soma + 0
#         print("O produto %d e: %.2f"%(contPreco,precoProduto))
#     contPreco = contPreco + 1

print("A soma do preço de todos os produtos e: %.2f"%soma)

#pedir o valor em dinheiro
valorDinheiro = float(input("Qual o valor em dinheiro para pagar o valor da comnpra: "))
while valorDinheiro < soma:
    print("valor invalido ")
    valorDinheiro = float(input("Qual o valor em dinheiro para pagar o valor da comnpra: "))
troco = soma - valorDinheiro
print("A compra foi efetuada com sucesso, gerando %.2f de troco"%troco)
