#Pais A
habitantesA = 80000
taxaA = 0.03

#Pais B
habitantesB = 200000
taxaB = 0.015

#calculo
print("Calculando....")
cont = 0
while habitantesA <= habitantesB :
    habitantesA = habitantesA + habitantesA * taxaA
    habitantesB = habitantesB + habitantesB * taxaB
    cont = cont + 1
print("A quantidade de anos que demorara para que o pais A ultrapasse o B e: %d "%cont)