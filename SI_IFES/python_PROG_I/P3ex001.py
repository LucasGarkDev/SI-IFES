nomeUsuario = str(input("Digite o nome do usuario: "))
senha = str(input("Digite a senha do usuario: "))
contagemSenha = len(senha)
while senha == nomeUsuario or contagemSenha < 6 :
    print("Senha invalida")
    senha = str(input("Digite a senha do usuario: "))
    contagemSenha = len(senha)
print("O usuario possui o nome: %s"%nomeUsuario)
print("A senha e: %s"%senha)
