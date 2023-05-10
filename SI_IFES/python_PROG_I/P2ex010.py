import math

# Perguntando idade e peso do paciente
idade = int(input("Digite a idade do paciente: "))
peso = float(input("Digite o peso do paciente (em kg): "))

# Calculando a dosagem do medicamento
if idade >= 12:
    if peso >= 60:
        dosagem = 1000
    else:
        dosagem = 875
else:
    if peso >= 5 and peso < 9.1:
        dosagem = 125
    elif peso >= 9.1 and peso < 16.1:
        dosagem = 250
    elif peso >= 16.1 and peso < 24.1:
        dosagem = 375
    elif peso >= 24.1 and peso < 30:
        dosagem = 500
    elif peso >= 30:
        dosagem = 750
    else:
        print("Peso inválido!")
        exit()

# Calculando a quantidade de gotas por dose
ml_por_dose = dosagem / 500
gotas_por_dose = ml_por_dose * 20

# Imprimindo a receita com as informações
print("\nReceita:\n")
print(f"Dosagem: {dosagem} mg")
print(f"Gotas por dose: {gotas_por_dose}")
