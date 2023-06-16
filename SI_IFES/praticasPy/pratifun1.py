# Data com mês por extenso. Construa uma função que receba uma data 
# no formato DD/MM/AAAA e devolva uma string no formato D de 
# mesPorExtenso de AAAA. Opcionalmente, valide a data e retorne 
# NULL caso a data seja inválida.

#------------------------funçoes----------------------
#funçao de pedir a data
def pedirData():
    print("Digite uma data(ex= DD/MM/AAAA ou 12/10/2009): ")
    dia = int(input("Digite o dia: "))
    while dia <= 00 or dia > 30 :
        print("Numero Invalido")
        dia = int(input("Digite novamente: "))
    mes = int(input("Digite o numero do mes: "))
    while mes <= 00 or mes > 12 :
        print("Numero Invalido")
        mes = int(input("Digite novamente: "))
    ano = int(input("Digite o ano: "))
    while ano <= 0000 or ano > 2023 :
        print("Numero Invalido")
        ano = int(input("Digite novamente: "))
    return dToString(dia,mes,ano)


#funçao de conversao dos numeros para string
def dToString(dia,mes,ano):
    dia = str(dia)
    mes = str(mes)
    mesExt = mesPorExtenso(mes)
    ano = str(ano)
    res = conversao(dia,mesExt,ano)
    return res

#funçao de mes por extenso
def mesPorExtenso(mes):
    if mes == 1:
        mes = "Janeiro"
    elif mes == 2:
        mes == "Fevereiro"
    elif mes == 3:
        mes = "Março"
    elif mes == 4:
        mes = "Abril"
    elif mes == 5:
        mes = "Maio"
    elif mes == 6:
        mes = "Junho"
    elif mes == 7:
        mes = "Julho"
    elif mes == 8:
        mes = "Agosto"
    elif mes == 9:
        mes = "Setembro"
    elif mes == 10:
        mes = "Outubro"
    elif mes == 11:
        mes = "Novembro"
    else:
        mes = "Dezembro"
    return mes
#funçao de conversao
def conversao(dia,mesExt,ano):
    print("Hoje e dia %s do %s de %s"%(dia,mesExt,ano))
#------------------------main-------------------------
def main():
    pedirData()
main()