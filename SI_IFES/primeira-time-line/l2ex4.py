# Faça um programa que peça a hora atual e mostre uma mensagemna tela deacordocomos intervalos abaixo:
# 0 <= Hora < 5 
#  “VAI DORMIR ...” 5 <= Hora < 12
#  “BOM DIA” 12 <= Hora < 18 
#  “BOA TARDE” 18 <= Hora < 24  
# “BOA NOITE” Outro valor 
#  “HORA INVÁLIDA”

hora = float(input('Que horas sao?'))
if hora < 0 or hora > 24 :
    print('Hora invalida')
elif hora <= 5 :
    print('Vai dormir...')
elif hora <= 12 :
    print('Bom dia')
elif hora <= 18 :
    print('Boa tarde')
else :
    print('Boa noite')