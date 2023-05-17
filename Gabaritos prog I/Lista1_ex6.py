# Calcule o tempo de uma viagem de carro.
# Pergunte a distância a percorrer e 
# a velocidade média esperada para a viagem.

d = float(input("Distância em km: "))
v = float(input("Velocidade média em km/h: "))
t = d / v
print ("Tempo aproximado em horas: %.1f" %t)
