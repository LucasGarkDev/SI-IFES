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
