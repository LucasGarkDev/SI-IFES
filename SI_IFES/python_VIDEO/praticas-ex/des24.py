# Em uma competição de salto em distância cada atleta tem direito a cinco saltos. No 
# final da série de saltos de cada atleta, o melhor e o pior resultados são eliminados.
# O seu resultado fica sendo a média dos três valores restantes. Você deve fazer um 
# programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus 
# saltos e depois informe a média dos saltos conforme a descrição acima informada 
# (retirar o melhor e o pior salto e depois calcular a média). Os saltos são informados na 
#ordem da execução, portanto 
# não são ordenados. O programa deve ser encerrado quando não for informado o nome do atleta. 
# A saída do programa deve ser conforme o exemplo abaixo:
# Atleta: Rodrigo Curvêllo

# Primeiro Salto: 6.5 m
# Segundo Salto: 6.1 m
# Terceiro Salto: 6.2 m
# Quarto Salto: 5.4 m
# Quinto Salto: 5.3 m

# Melhor salto:  6.5 m
# Pior salto: 5.3 m
# Média dos demais saltos: 5.9 m

# Resultado final:
# Rodrigo Curvêllo: 5.9 m

#inicializaçao
cont = 1
contNum = 1
maior = 1
menor = 1
somaSaltos = 0
outroAtleta = "Sim"

#perguntar se deseja avaliar outro atleta
while outroAtleta == "Sim" :
    
    #pedir o nome do atleta 
    nome = str(input("Digite o nome do atleta: ")).title()
    contagemNome = len(nome)
    while contagemNome < 3 :
        print("Nome nao existente")
        nome = str(input("Digite o nome do atleta: ")).title()
        contagemNome = len(nome)

    #perguntar sobre o salto1 
    salto1 = float(input("Digite o valor da distancia do primeiro salto: "))
    while salto1 <= 0 :
        print("Distancia do salto imcompativel")
        salto1 = float(input("Digite o valor da distancia salto: "))
    #comparaçao para dizer se esse salto e o menor ou o maior
    if salto1 > maior :
        maior = salto1
    else :
        menor = salto1
    
    #perguntar sobre o salto2 
    salto2 = float(input("Digite o valor da distancia do segundo salto: "))
    while salto2 <= 0 :
        print("Distancia do salto imcompativel")
        salto2 = float(input("Digite o valor da distancia segundo salto: "))
    #comparaçao para dizer se esse salto e o menor ou o maior
    if salto2 > maior :
        maior = salto2
    else :
        menor = salto2

    #perguntar sobre o salto3 
    salto3 = float(input("Digite o valor da distancia do terceiro salto: "))
    while salto3 <= 0 :
        print("Distancia do salto imcompativel")
        salto3 = float(input("Digite o valor da distancia terceiro salto: "))
    #comparaçao para dizer se esse salto e o menor ou o maior
    if salto3 > maior :
        maior = salto3
    else :
        menor = salto3

    #perguntar sobre o salto4 
    salto4 = float(input("Digite o valor da distancia do quarto salto: "))
    while salto4 <= 0 :
        print("Distancia do salto imcompativel")
        salto4 = float(input("Digite o valor da distancia quarto salto: "))
    #comparaçao para dizer se esse salto e o menor ou o maior
    if salto4 > maior :
        maior = salto4
    else :
        menor = salto4

    #perguntar sobre o salto5
    salto5 = float(input("Digite o valor da distancia do quinto salto: "))
    while salto5 <= 0 :
        print("Distancia do salto imcompativel")
        salto5 = float(input("Digite o valor da distancia quinto salto: "))
    #comparaçao para dizer se esse salto e o menor ou o maior
    if salto5 > maior :
        maior = salto5
    else :
        menor = salto5
    
    print("A distancia do salto 1 e: %.2f"%salto1)
    print("A distancia do salto 1 e: %.2f"%salto2)
    print("A distancia do salto 1 e: %.2f"%salto3)
    print("A distancia do salto 1 e: %.2f"%salto4)
    print("A distancia do salto 1 e: %.2f"%salto5)
    print("Melhor Salto: %.2f"%maior)
    print("Pior Salto: %.2f"%menor)
    #media dos saltos 
    media = (salto1 + salto2 + salto3 + salto4 + salto5) - (maior + menor) / 3
    print("Resultado Final: \n %s: %.2f"%(nome,media))

    outroAtleta = str(input("Voce deseja avaliar outro atleta?(sim/nao)")).title()