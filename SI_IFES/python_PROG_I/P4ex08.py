# Faça um programa que use a função valorPagamento para determinar 
# o valor a ser pago por uma prestação de uma conta. O programa 
# deverá solicitar ao usuário o valor da prestação e o número de 
# dias em atraso e passar estes valores para a função
# valorPagamento, que calculará o valor a ser pago e 
# devolverá este valor ao programa que a chamou. O programa deverá 
# então exibir o valor a ser pago na tela. Após a execução o 
# programa deverá voltar a pedir outro valor de prestação e 
# assim continuar até que seja informado um valor igual a zero 
# para a prestação. Neste momento o programa deverá ser
# encerrado, exibindo o relatório do dia, que conterá a quantidade e 
# o valor total de prestações pagas no dia. O cálculo do valor a 
# ser pago é feito da seguinte forma. Para
# pagamentos sem atraso, cobrar o valor da prestação. 
# Quando houver atraso, cobrar 3% de
# multa, mais 0,1% de juros por dia de atraso. 

#-----------------funçoes--------------------
#funçao valor pagamento
def valorPagamento(valor,dias) :
    if valor > 0 :
        if dias <= 0:
            calculo = valor * (0.03 * valor)
            return calculo
        else:
            acrescimo = dias * 0.001
            calculo = valor * acrescimo
            return calculo
    else :
        relatorio()

#funçao para pedir o valor da prestaçao
def valorPrestaçao() :
    valorPres = float(input("Digite o valor da prestaçao: "))
    while valorPres < 0 :
        print("Valor imcompativel")
        valorPres = float(input("Digite o valor da prestaçao, novamente: "))
    return valorPres

#funçao para pedir o numero de dias em atraso
def numDiasAtraso() :
    numAtraso = int(input("Digite o numero de dias em atraso: "))
    while numAtraso < 0 :
        print("numero de dias invalidos")
        numAtraso = int(input("Digite o numero de dias em atraso,novamente: "))
    return numAtraso

#funçao para armazenar o relatorio
def relatorio(valor,dias) :
    valorDia = valor
    diasDoDia = dias
    print("----------Relatorio---------")
    print("O valor diario e: %.2f"%valorDia)
    print("A quantidade de dias atrasados atualmente e: %d"%diasDoDia)
    print("----------------------------")
#-----------------main-----------------------
valorDaPrestaçao = valorPrestaçao()
diasAtraso = numDiasAtraso()
dadosRelatorio = relatorio(valorDaPrestaçao,diasAtraso)
pagamento = valorPagamento(valorDaPrestaçao,diasAtraso)
