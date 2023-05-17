# Solicite o nome, a quantidade e o preço de um produto e
# o percentual de desconto. Exiba o nome do produto,
# o valor do desconto e o preço a pagar.

nome = input("Nome do produto: ")
qtde = int(input("Quantidade: "))
preco = float(input("Preço do produto: "))
porc = float(input("Porcentagem de desconto: "))

total = preco * qtde
desconto = total * (porc / 100)
novoTotal = total - desconto

print("Nome do produro: %s" %nome)
print("Desconto: R$ %.2f" %desconto)
print("Preço a pagar: R$ %.2f" %novoTotal)
