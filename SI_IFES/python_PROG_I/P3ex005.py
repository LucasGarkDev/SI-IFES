#Pais A
habitantesA = 80000
taxacrescA = (3/100) * 80000

#Pais B
habitantesB = 200000
taxacrescB = (1.5/100) * 200000

#anos necessarios
anos = 0

#calculo de anos necessarios ate eles estarem com a mesma populaçao
print("Estamos calculando.....")
while habitantesA < habitantesB :
    habitantesA = habitantesA * taxacrescA
    habitantesB = habitantesB * taxacrescB
    anos = anos + 1 
print("A quantidade de anos que eles precisaram para ficar a com a mesma populaçao foi...")
print("...: %d anos "%anos)