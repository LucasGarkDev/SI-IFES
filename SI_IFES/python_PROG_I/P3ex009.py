#inicializar
acabouClientes = "sim"
maiorAltura = 0.715
menorAltura = 0.715
maisGordo = 0
maisMagro = 999
somaAlturas = 0
somaPesos = 0
contA = 1
contP = 1
#inicio
while acabouClientes == "sim" :

    #pedir o codigo
    codigo = int(input("Digite o codigo desse cliente: "))
    while codigo <= 0 :
        print("Nao existe cliente com esse codigo")
        codigo = int(input("Digite o codigo desse cliente,novamente: "))

    #pedir a altura
    altura = float(input("Digite a autura desse cliente: "))
    while altura <= 0.715 :
        print("Altura nao existente")
        altura = float(input("Digite a autura desse cliente,novamente: "))

    #definir cliente mais alto
    if altura > maiorAltura :
        maiorAltura = altura

    #definir cliente mais baixo
    if altura < menorAltura :
        menorAltura = altura
    somaAlturas = somaAlturas + altura
    contA = contA + 1

    #pedir peso
    peso = float(input("Digite o peso desse cliente: "))
    while peso <= 8.5 :
        print("Peso invalido")
        peso = float(input("Digite o peso desse cliente,novamente: "))
    #calculo
    imc = peso / pow(altura,2)
    if imc <= maisGordo :
        imc = codigo
        maisGordo = imc
    if imc >= maisMagro :
        imc = codigo
        maisMagro = imc
    somaPesos = somaPesos + peso
    contP = contP + 1

    #media das alturas
    mediaAlturas = somaAlturas / contA

    #media dos pesos    
    mediaPesos = somaPesos / contP
    #interromper o loop
    acabouClientes = str(input("O numero de clientes acabou?(sim/nao): ")).lower()
print("-----------------Relatorio--------------------")
print("Esse e o cliente mais alto: %.2f"%maiorAltura)
print("Esse e o cliente mais baixo: %.2f"%menorAltura)
print("Esse e o codigo do cliente mais gordo: %.2f"%maisGordo)
print("Esse e o codigo do cliente mais magro: %.2f"%maisMagro)
print("Essa e a media das alturas: %.2f"%mediaAlturas)
print("Essa e a media dos pesos: %.2f"%mediaPesos)
