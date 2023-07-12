#----------------------funçoes-----------------------------
def menu() :
    op = ""
    while op.isdigit() == False or int(op) < 0 or int(op) > 6:

        print("\n" * 130)        
        print("NOME DO SEU SISTEMA:")
        print("1-Inserir produto")
        print("2-Pesquisar por código")
        print("3-Aumentar preço")
        print("4-Maior preço")
        print("5-Excluir")
        print("6-Listar")
        print("0-Sair")
        op = input("Escolha sua opção: ")
    return int(op)

def percorreVet(vetor,e):
    i = 0
    while i < len(vetor):
        if vetor[i] == vetor[e]:
            return vetor[e]
        i += 1  

def pesquisar(vetor, pesqui):
    for i, e in enumerate(vetor): 
        if e == pesqui: 
            return i
    return -1

def inserirProduto(vetor1,vetor2):
    cod = pedirCodigo(vetor1)
    vetor1.append(cod)
    preco = pedirPreco()
    vetor2.append(preco)

def pedirCodigo(vetor1):
    codigo = int(input("Digite o numero do codigo: "))
    ver = pesquisar(vetor1,codigo) 
    while ver != -1 :
        print("Codigo ja existente")
        codigo = int(input("Digite o numero do codigo, novamente: "))
        ver = pesquisar(vetor1,codigo)
    return codigo

def pedirPreco():
    preco = float(input("Digite o preço desse produto: "))
    while preco <= 0 :
        print("Preço impossivel de existi no estoque")
        preco = float(input("Digite o preço desse produto, novamente: "))
    return preco

def imprimirResPesquisa(item, vetor1, vetor2, i):
    if item == -1:
        print("O produto sugerido não foi encontrado")
    else:
        print("----------------------------------")
        print("O produto de código %d tem o preço: %.2f" % (vetor1[item], vetor2[item]))
        print("----------------------------------")

def somar(vetor2):
    i = 1
    soma = 0
    while i < len(vetor2):
        soma += vetor2[i]
        i += 1
    return soma

def porcentagem(indice, vetor2, porcentagem):
    cal = vetor2[indice]
    aumento = cal * (porcentagem / 100)
    return cal + aumento

def aumentarPreco(vetor2, vetor1):
    codigo = int(input("Digite o código do produto: "))
    indice = pesquisar(vetor1, codigo)
    percentual = float(input("Digite o valor da porcentagem de aumento: "))
    while percentual <= 0:
        print("Porcentagem inválida")
        percentual = float(input("Digite o valor da porcentagem de aumento: "))
    calporcentagem = porcentagem(indice, vetor2, percentual)
    if indice == -1:
        print("O produto de código %d não foi encontrado" % codigo)
    else:
        print("-----------------------------------------")
        print("     O valor do produto %d subirá de %.2f \n" % (vetor1[indice], vetor2[indice]))
        vetor2[indice] = calporcentagem
        print("     para %.2f." % vetor2[indice])
        print("-----------------------------------------")

def maiorPreco(vetor2,vetor1):
    maiorPreco = 0  
    codigoMaiorPreco = -1
    i = 1
    while i < len(vetor2):
        if vetor2[i] > maiorPreco:
            maiorPreco = vetor2[i]
            codigoMaiorPreco = vetor1[i]
        i += 1

    if codigoMaiorPreco != -1:
        print("----------------------------------")
        print("O produto de código %d tem o maior preço: %.2f" % (codigoMaiorPreco, maiorPreco))
        print("----------------------------------")
    else:
        print("Nenhum produto encontrado")

def excliur(vetor1,vetor2):
    codigo = int(input("Digite o código do produto a ser excluído: "))
    indice = pesquisar(vetor1, codigo)
    if indice != -1:
        del(vetor1[indice])
        del(vetor2[indice])
        print("Produto de código %d excluído com sucesso!" % codigo)
    else:
        print("Produto de código %d não encontrado." % codigo)

###### PRINCIPAL ##########
def main():
    op = 1
    vetorCod = [0]
    vetorPreco = [0]
    while op != 0:
        op = menu()
        
        if op == 0:
            print("\n\nFim do programa!!!\n\n")
            
        elif op == 1:
            print("\n\nINSERIR PRODUTO\n\n")
            inserirProduto(vetorCod,vetorPreco)

            
        elif op == 2:
            print("\n\nPESQUISAR POR CODIGO\n\n")
            itemPesquisa = int(input("Digite o código do produto: "))
            ver = pesquisar(vetorCod, itemPesquisa)
            imprimirResPesquisa(ver, vetorCod, vetorPreco, itemPesquisa)


        elif op == 3:
            print("\n\nAUMENTAR O PREÇO\n\n")
            aumentarPreco(vetorPreco,vetorCod)
            


        elif op == 4:
            print("\n\nMAIOR\n\n")
            maiorPreco(vetorPreco,vetorCod)



        elif op == 5:
            print("\n\nEXCLUIR\n\n")
            excliur(vetorCod,vetorPreco)


        elif op == 6:
            print("\n\nLISTAR\n\n")
            # Listar todos os dados dos vetores


        else:
            print("Opção inválida!")

        input("Pressione <enter> para continuar ...")
    


main()
