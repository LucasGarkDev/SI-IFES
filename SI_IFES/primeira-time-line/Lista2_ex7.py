# LISTA 2 - Ex. 7

#Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho
# em metros quadrados da área a ser pintada. Considere que a cobertura da
# tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida
# em latas de 18 litros, que custam R$ 80,00.
# Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
# Obs. : somente são vendidos um número inteiro de latas.

area = int(input("Área (em metros quadrado): "))

#quantidade de litros
litros = area / 3

#calcula quantidade de lata e arredonda para inteiro maior
if litros % 18 == 0:
  latas = litros / 18  #valor exato
else:
  latas = (litros // 18) + 1  # valor quebrado. Pego o quociente, mais 1,
                              # porque não pode vender lata incompleta

#calcula o valor
valor = latas * 80

print ("Latas: %d" %latas)
print ("Valor total: R$ %.2f" %valor)



