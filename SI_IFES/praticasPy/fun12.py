# Faça um programa que converta da notação de 24 horas para a notação 
# de 12 horas. Por exemplo, o programa deve converter 14:25 em 2:25 
# P.M. A entrada é dada em dois inteiros. Deve haver pelo menos duas 
# funções: uma para fazer a conversão e uma para a saída. Registre a 
# informação A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. 
# Assim, a função para efetuar as conversões terá um parâmetro formal 
# para registrar se é A.M. ou P.M. Inclua um loop que permita que o 
# usuário repita esse cálculo para novos valores de entrada todas as 
# vezes que desejar.

import biblifun


#funçao para pedir o horario
def pedirHorario() :
    hora = float(input("Digite a hora do dia que deseja: "))
    while hora < 00.00 or hora >= 24.00 :
        print("Hora nao existente")
        hora = float(input("Digite novamente(ex:11.40): "))
    return hora

#funçao de conversao 
def conversaoDeHora(hora) :
    if hora < 13.00 :
        print("As horas sao: %.2f A.M"%hora)
    elif hora > 14.00 :
        cal = hora - 12
        print("As horas sao: %.2f P.M"%cal)

#funçao de saida


#------------------main----------------
horaPedida = pedirHorario()
