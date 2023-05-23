#validaçao do nome
nome = str(input("Digite o seu nome: "))
nome = len(nome)
while nome < 3 :
    print("Nome invalido")
    nome = str(input("Digite o seu nome: "))
    nome = len(nome)

#validaçao da idade
idade = int(input("Digite a sua idade: "))
while idade < 0 or idade > 150 :
    print("Idade invalida")
    idade = int(input("Digite a sua idade: "))

#validaçao do Salario
salario = float(input("Digite seu salario atual: "))
while salario <= 0 :
    print("Esse Salario nao consta")
    salario = float(input("Digite seu salario atual: "))

#validaçao do sexo
sexo = str(input("Digite a letra indicadora do seu sexo(F/M): ")).upper()
while sexo != "F" and sexo != "M" :
    print("O sexo que voce digitou nao existe")
    sexo = str(input("Digite a letra indicadora do seu sexo(F/M): ")).upper()

#validaçao do Estado civil
estadoCivil = str(input("Qual e seu Estado Civil atualmente(S/C/V/D): ")).upper()
while estadoCivil != "S" and estadoCivil != "C" and estadoCivil != "V" and estadoCivil != "D":
    print("Estado Civil Invalido")
    estadoCivil = str(input("Qual e seu Estado Civil atualmente(S/C/V/D): ")).upper()


#leitura final do codigo
print("O seu nome e: %s"%nome)
print("A sua idade e: %d anos"%idade)
print("O salario que voce ganha atualmente e: %.2f"%salario)
print("O seu sexo e: %s"%sexo)
print("O seu estado civil atual e: %s"%estadoCivil)