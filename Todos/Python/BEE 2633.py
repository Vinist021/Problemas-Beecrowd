try:
    while True:
        N = int(input())
        produtos = {}

        i = 0
        while i < N:
            dados = input().split()
            produtos[dados[0]] = int(dados[1])

            i += 1

        ordenado = dict(sorted(produtos.items(), key=lambda item: item[1]))

        a = 0

        chaves = list(ordenado.keys())
        while a < (len(chaves)-1):

            print(chaves[a], end=' ')

            a += 1

        print(chaves[a])

except EOFError:
    exit(0)
