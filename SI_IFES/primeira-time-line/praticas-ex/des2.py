# Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha 
# igual ao nome do usuário, 
# mostrando uma mensagem de erro e voltando a pedir as informações.

nome = str(input("Digite o nome do usuario: ")).title()
senha = input("Digite a senha do usuario: ")
if senha == nome :
    print("senha invalida")
    senha = input("Tente novamente: ")
print("O nome desse macaco e: %s e a senha desse bosal e: %s"%(nome,senha))