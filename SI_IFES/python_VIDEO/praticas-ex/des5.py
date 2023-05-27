#Pais A
habitantesA = int(input("Digite a quantidade media de pessoas do Pais A: "))
taxaA = float(input("Digite a taxa de crescimento medio desse pais: "))
taxaA = taxaA / 100

#Pais B
habitantesB = int(input("Digite a quantidade media de pessoas do Pais B: "))
taxaB = float(input("Digite a taxa de crescimento medio desse pais: "))
taxaB = taxaB / 100

#calculo
print("Calculando....")
cont = 0
while habitantesA < habitantesB :
    habitantesA = habitantesA + habitantesA * taxaA
    habitantesB = habitantesB + habitantesB * taxaB
    cont = cont + 1
print("A quantidade de anos que demorara para que o pais A ultrapasse o B e: %d "%cont)