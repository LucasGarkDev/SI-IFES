# Escreva um programa para calcular a redução do tempo de vida de um fumante.
# Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou.
# Considere que um fumante perde 10 minutos de vida a cada cigarro,
# calcule quantos dias de vida um fumante perderá. Exiba o total de dias.

cigarros = int(input("Cigarros por dia: "))
anos = int(input("Anos fumados: "))

total_cigarros = anos * 365 * cigarros
minutos_perdidos = total_cigarros * 10


# Converter de minutos para horas (60min) e depois para dias (24h)
dias_perdidos = minutos_perdidos / 60 / 24

print ("Você perdeu aproximadamente %.2f dias" %dias_perdidos)
