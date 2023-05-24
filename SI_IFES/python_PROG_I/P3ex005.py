#Pais A
habitantesA = 80000
taxaA = 0.03

#Pais B
habitantesB = 200000
taxaB = 0.015

#anos necessarios
anos = 0

#calculo de anos necessarios ate eles estarem com a mesma populaçao
print("Estamos calculando.....")
while habitantesA < habitantesB :
    habitantesA = habitantesA + habitantesA * taxaA
    habitantesB = habitantesB + habitantesB * taxaB
    anos = anos + 1 
print("A quantidade de anos que eles precisaram para ficar a com a mesma populaçao foi...")
print("...: %d anos "%anos)
