# LISTA 2 - Ex. 9

cod = int(input("Código do produto: "))
qtde = int(input("Quantidade vendida: "))

# Calcular o preco unitário
if cod < 1:
    preco = 0.0
elif cod <= 10:
    preco = 10.0
elif cod <= 20:
    preco = 15.0
elif cod <= 30:
    preco = 20.0
elif cod <= 40:
    preco = 30.0
else:
    preco = 0.0


# Calcular o desconto
if preco == 0.0:
    print("Código inválido!")
elif qtde <= 0:
    print("Quantidade inválida!")
else:
    total = preco * qtde
    if total < 250:        
        desconto = total * (5/100)
    elif total < 500:
        desconto = total * (10/100)
    else:
        desconto = total * (15/100)

    totalFinal = total - desconto
    print("Preço unitário:  R$ %7.2f" %preco)
    print("Valor total: \t R$ %7.2f" %total)
    print("Desconto: \t-R$ %7.2f" %desconto)
    print("Valor final: \t R$ %7.2f" %totalFinal)
    
