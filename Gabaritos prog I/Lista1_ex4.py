# Faça um programa que calcule o aumento de um salário.
# Ele deve solicitar o valor do salário e a porcentagem do aumento.
# Exiba o valor do aumento e do novo salário.

salario = float(input("Salário: "))
porc = float(input("Porcentagem de aumento: "))
aumento = salario * (porc / 100)
novo = salario + aumento
print("Aumento: R$ %.2f" %aumento)
print("Novo salário: R$ %.2f" %novo)
