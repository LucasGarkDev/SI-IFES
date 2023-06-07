# Faça um programa que leia um nome de usuário e a sua senha. 
# A senha não pode ser
# igual ao nome do usuário, nem menor que 6 caracteres. 
# Caso ocorra o erro, mostre a
# mensagem de erro e volte a pedir as informações. 
# No final imprima o nome e a senha.

#---------------funçoes--------------------------------
#funçao para pedir e validar o nome
def nomePedir() :
    nomeUsuario = str(input("Digite o nome do usuario: ")).title()
    contagemNome = len(nomeUsuario)
    while contagemNome <= 2 :
        print("Nome invalido")
        nomeUsuario = str(input("Digite o nome do usuario: ")).title()
        contagemNome = len(nomeUsuario)
    

#funçao para pedir e validar a senha
def senhaPedir(nomeUsuario) :
    senha = str(input("Digite a senha do usuario: "))
    contagemSenha = len(senha)
    while senha == nomeUsuario or contagemSenha < 6 :
        print("Senha invalida")
        senha = str(input("Digite a senha do usuario: "))
        contagemSenha = len(senha)





print("O usuario possui o nome: %s"%nomeUsuario)
print("A senha e: %s"%senha)

#----------------main----------------------------------