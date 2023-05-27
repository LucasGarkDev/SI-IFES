#nome
nome = str(input("Digite o seu nome: ")).title()
contagemNome = len(nome)
while contagemNome < 3 :
    print("Nao existe nome com menos de 3 letras, voce e um alen!?")
    nome = str(input("Digite o seu nome: ")).title()
    contagemNome = len(nome)

#idade
idade = int(input("Digite a sua idade: "))
while idade < 0 or idade > 150 :
    print("Oxi!, que parametro de idade e esse?")
    idade = int(input("Digite a sua idade: "))

#salario
salario = float(input("Digite o valor do seu salario: "))
while salario <= 0 :
    print("Pobre nao tem espaço aqui nao")
    salario = float(input("Digite o valor do seu salario: "))

#sexo
sexo = str(input("Digite a letra corresponde ao seu sexo (F-feminino/M-masculino): ")).upper()
while sexo != "F" and sexo != "M" :
    print("Entao voce e um helicoptero de combate!?, cacete!")
    sexo = str(input("Digite a letra corresponde ao seu sexo (F-feminino/M-masculino): ")).upper()

#estado civil
estadoCivil = str(input("Digite a letra correspondete ao seu estado civil(S/C/V/D): ")).upper()
while estadoCivil != "S" and estadoCivil != "C" and estadoCivil != "V" and estadoCivil != "D" :
    print("Entao para começar nem gente voce e...")
    estadoCivil = str(input("Digite a letra correspondete ao seu estado civil(S/C/V/D): ")).upper()

#leitura final
print("Seu nome e: %s"%nome)
print("Sua idade e: %d"%idade)
print("Seu salario atual e: %.2f"%salario)
print("O seu sexo biologico e: %s"%sexo)
print("O seu estado civil e de: %s"%estadoCivil)
print("Parabens voce fez algo de util em sua vida!......seu infeliz!")