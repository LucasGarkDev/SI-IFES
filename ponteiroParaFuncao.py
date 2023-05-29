def maior(x,y):
    return x>y

def menor(x,y):
    return x<y

def igual(x,y):
    return x==y

def maiorMenor(arr, comp):
    i=arr[0]
    for valor in arr: 
        if(comp(valor,i)):
            i=valor
    return i
        

arr = [2,3,1,15,7]
print(f"{maiorMenor(arr, menor)} e {maiorMenor(arr, maior)} e {maiorMenor(arr,igual)}")
