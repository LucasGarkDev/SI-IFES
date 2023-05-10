area = float(input('Quantos metros quadrados voce deseja pintar?'))
area = area * 3
if area <= 54 :
    totaldelatas = 1
    preço = 80.00
else :
    totaldelatas = area // 18 
    preço = 80.00 * totaldelatas
print('O total de latas que voce deve comprar e %.2f e o preço e %.2f'%(totaldelatas, preço))