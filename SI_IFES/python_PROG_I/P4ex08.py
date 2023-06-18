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
    if dias == 0:
        return valor
    else:
        multa = valor * 0.03
        juros = dias * 0.001
        valorJuros = valor * juros
        valorTotal = valor + multa + valorJuros
        return valorTotal

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

#funçao para repetir tudo
def desejaContinuar():
    letra = input("Desejar continuar (S ou N)? ").upper()
    while letra != "S" and letra != "N" :
        letra = input("Desejar continuar (S ou N)? ").upper()
    return letra

#-----------------main-----------------------
def main() :
    somaPrestacao = 0
    somaDias = 0
    continuar = "S"
    while continuar == "S":

        valorDaPrestacao = valorPrestaçao()
        diasAtraso = numDiasAtraso()
        pagamento = valorPagamento(valorDaPrestacao,diasAtraso)
        print("O valor do pagamento foi: %.2f"%pagamento)
        somaPrestacao = somaPrestacao + valorDaPrestacao
        somaDias = somaDias + diasAtraso

        continuar = desejaContinuar()

    print("Hoje foram pagas %d prestações. " %somaDias)
    print("O valor total foi de R$ %7.2f. " %somaPrestacao)  
      

main()