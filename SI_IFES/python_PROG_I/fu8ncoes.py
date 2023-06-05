def organizar() :
    print("-" * 30)

organizar()
print("Inicializaçao")
organizar()

def criar_comentario(comentario):
    """
    Cria um comentário de uma linha.

    Argumento:
    - comentario (str): O conteúdo do comentário.

    Retorna:
    Uma string com o comentário formatado.

    Exemplo de uso:
    comentario = criar_comentario("Este é um comentário de exemplo.")
    print(comentario)
    # Saída: "# Este é um comentário de exemplo."
    """
    return "# " + comentario

comentario = criar_comentario("Este é um comentário de exemplo.")
print(comentario)
# Saída: "# Este é um comentário de exemplo."