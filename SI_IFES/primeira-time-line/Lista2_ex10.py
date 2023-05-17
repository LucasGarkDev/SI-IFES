# LISTA 2 - Ex. 10

idade = int(input("Idade do paciente: "))
peso = float(input("Peso do paciente (em kg): "))

# Calcular a dosagem
if idade < 0 or idade > 120:
    print("Idade inválida!")
    dosagem = 0

elif idade >= 12:
    # Adolescentes e adultos
    if peso < 5 or peso > 500:
        print("Peso inválido!")
        dosagem = 0
    elif peso >= 60:
        dosagem = 1000
    else:
        dosagem = 875

else:
    # CRIANÇAS
    if peso < 5 or peso > 500:
        print("Peso inválido!")
        dosagem = 0
    elif peso <= 9:
        dosagem = 125
    elif peso <= 16:
        dosagem = 250
    elif peso <= 24:
        dosagem = 375
    elif peso <= 30:
        dosagem = 500
    else:
        dosagem = 750
 
# Calcular em ml
doseML = dosagem / 500
            
# Calcular em GOTAS
doseGotas = doseML * 20

print("Sua dose será de %.0f gotas." %doseGotas)
