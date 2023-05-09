import math
catoposto = int(input("Qual e o cateto oposto do triangulo retangulo?"))
catadjacente= int(input("Qual e o cateto adjacente do triangulo retangulo?"))
hipotenusa = math.hypot(catoposto, catadjacente)
print('A hipotenusa desse triangulo sera {}'.format(hipotenusa))
