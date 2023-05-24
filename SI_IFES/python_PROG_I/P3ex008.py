#inicializaçao
soma = 0
outraCompra = "S"
while outraCompra == "S" :
    #pedir o produto
    produto = float(input("Digite o preço do primeiro produto: R$ "))
    while produto < 0 :
        print("Nao esxistem produtos com esse preço")
        produto = float(input("Digite o preço novamente: R$ "))
        soma = soma - produto

    #lista do caixa
    while produto != 0 :
        print("O valor desse produto e: R$ %.2f"%produto)
        soma = soma + produto
        produto = float(input("Digite o preço de outro produto: R$ "))
    print("O preço total da soma dos produtos e: %.2f"%soma)

    #perguntar o valor em dinheiro 
    dinheiro = float(input("Digite o valor em dinheiro do pagamento: R$ "))
    if dinheiro >= soma :
        troco = dinheiro - soma
        if troco == 0 :
            print("Voce nao tem troco")
        else :
            print("O valor do seu troco e: R$ %.2f"%troco)
    else :
        print("Voce nao tem dineiro o suficiente para pagar por essa compra")

#realizar outra compra
outraCompra = str(input("Voce deseja realizar outra compra? (S/N): ")).upper()

