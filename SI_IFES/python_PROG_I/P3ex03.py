nomeUsuario = str(input("Digite o nome do usuario: "))
senha = str(input("Digite a senha do usuario: "))
while senha == nomeUsuario :
    print("Senha invalida")
    senha = str(input("Digite a senha do usuario: "))
senha = len(senha)
while senha < 6 :
    print("Senha Invalida")
    senha = int(input("Digite a senha do usuario: "))
print("O usuario possui o nome: %s"%nomeUsuario)
print("A senha e: %s"%senha)
