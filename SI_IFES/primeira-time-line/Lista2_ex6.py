# LISTA 2 - Ex. 6


tipo = input("Qual é o combustível? (A-Alcool ou G-Gasolina): ")
qtde = int(input("Informe a quantidade (em litros): "))

if tipo == "A" or tipo == "a":
    # ALCOOL
    print("Você abasteceu com ALCOOL. ")
    preco = 3.2
    if qtde < 0 :
        print("Quantidade inválida!")
        preco = 0
    elif qtde <= 20:
        preco = preco - preco * (3/100)
    else:
        preco = preco - preco * (5/100)
 

elif tipo == "G" or tipo == "g":
    #GASOLINA
    print("Você abasteceu com GASOLINA. ")
    preco = 3.9
    if qtde < 0 :
        print("Quantidade inválida!")
        preco = 0
    if qtde <= 20:
        preco = preco - preco * (4/100)
    else:
        preco = preco - preco * (6/100)


else:
    print("Combustível inválido!")
    preco = 0.0

if preco > 0:
    total = preco * qtde
    print("Preço com desconto: R$ %5.2f" %preco)
    print("Total a pagar: R$ %5.2f" %total)
