# O cardápio de uma lanchonete é o seguinte:
# Especificação   Código  Preço
# Cachorro Quente 100     R$ 1,20
# Bauru Simples   101     R$ 1,30
# Bauru com ovo   102     R$ 1,50
# Hambúrguer      103     R$ 1,20
# Cheeseburguer   104     R$ 1,30
# Refrigerante    105     R$ 1,00
# Faça um programa que leia o código dos itens pedidos e as quantidades 
# desejadas. Calcule e mostre o valor a ser pago por item (preço * quantidade) 
# e o total geral do pedido. Considere que o cliente deve informar quando o pedido 
# deve ser encerrado.


#perguntar quantos tipos de comida tem na lanchonete
tiposComida = int(input("Quantos tipos de comida a na lanchonete: "))
while tiposComida <= 0 :
    print("?... entao a lanchonete nao tem nada?")
    tiposComida = int(input("Quantos tipos de comida a na lanchonete: "))


#pedir o codigo
codigo = int(input("Digite um codigo(de 100 a 200): "))
while codigo < 100 or codigo > 200 :
    print("Codigo invalido")
    codigo = int(input("Digite um codigo(de 100 a 200): "))

#inicializaçao
cont = 1


#tabela de preços 
produto = 1
codigoNumeracao = 100
preco = 

while cont <= tiposComida :
    produto = produto + 1
