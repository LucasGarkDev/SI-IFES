#Escreva um programa que leia a quantidade de dias, horas, minutos e segundos
# do usuário. Calcule o total em segundos.

d = int(input("Dias: "))
h = int(input("Horas: "))
m = int(input("Minutos: "))
s = int(input("Segundos: "))

m = m * 60
h = h * 60 * 60
d = d * 24 * 60 * 60
total = s + m + h + d

print ("O total de segundos é : %s"  %total)
