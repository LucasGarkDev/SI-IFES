# Faça um programa que converta da notação de 24 horas para a notação de 
# 12 horas. Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A 
# entrada é dada em dois inteiros. Deve haver pelo menos duas funções: 
# uma para fazer a conversão e uma para a saída. Registre a informação 
# A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. Assim, a função 
# para efetuar as conversões terá um parâmetro formal para registrar se 
# é A.M. ou P.M. Inclua um loop que permita que o usuário repita esse 
# cálculo para novos valores de entrada todas as vezes que desejar.

#------------------------funçoes----------------------
#funçao pedir hora
def pedirHora():
    hora = int(input("Digite as horas do dia: "))
    while hora < 00 or hora > 23 :
        print("Hora Invalida")
        hora = int(input("Digite as horas do dia,novamente: "))
    return hora

#funçao para pedir os minutos
def pedirMinutos():
    minutos = int(input("Digite os minutos do dia: "))
    while minutos < 0 or minutos > 59 :
        print("Minutos Invalidos")
        minutos = int(input("Digite os minutos do dia,novamente: "))
    return minutos


#funçao de uniao
def uniao(hora,minutos):
    return conversao(hora,minutos)

#funçao de conversao
def conversao(hora,minutos):
    if hora > 12 :
        if hora < 14 :
            hora = 1
        elif hora < 15:
            hora = 2
        elif hora < 16 :
            hora = 3
        elif hora < 17 :
            hora = 4
        elif hora < 18 :
            hora = 5
        elif hora < 19 :
            hora = 6
        elif hora < 20 :
            hora = 7
        elif hora < 21 :
            hora = 8
        elif hora < 22 :
            hora = 9
        elif hora < 23 :
            hora = 10
        else :
            hora = 11
        hora = str(hora)
        minutos = str(minutos)
        horaComp = hora + ":" + minutos + " P.M"
        return horaComp
    else:
        hora = str(hora)
        minutos = str(minutos)
        horaComp = hora + ":" + minutos + " A.M"
        return horaComp
#------------------------main-------------------------
hora = pedirHora()
minutos = pedirMinutos()
horacompleta = uniao(hora,minutos)
print("A conversao deu: %s"%horacompleta)

