# Um funcionário de uma empresa recebe aumento salarial anualmente: Sabe-se que:
# Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00;
# Em 1996 recebeu aumento de 1,5% sobre seu salário inicial;
# A partir de 1997 (inclusive), os aumentos salariais sempre correspondem 
# ao dobro do percentual do ano anterior. Faça um programa que determine o salário 
# atual desse funcionário. Após concluir isto, altere o programa permitindo que o 
# usuário digite o salário inicial do funcionário.

#inicializaçao
ano = 1995
salario = float(input("Digite o valor do salario que o funcionario tinha em 1995: "))
while salario <= 0 :
    print("Salario nao compativel")
    salario = float(input("Digite novamente: "))
taxaSalarial = 0.015


#calculo do salario dos anos posteriores
anoAtual = int(input("Digite qual ano estamos atualmente: "))
while anoAtual <= 1995 :
    print("Esse funcionario so trabalhou nessa empresa apartir de 1995")
    anoAtual = int(input("Digite qual ano estamos atualmente: "))
while ano < anoAtual :
    taxaSalarial = taxaSalarial * 2
    aumento = salario * taxaSalarial
    salario = salario + aumento
    ano = ano + 1
print("O salario que ficara em %2.2f apos chegar no ano: %d "%(salario,ano,))
print("Sendo aplicado uma taxa total de %3.3f"%taxaSalarial)
    