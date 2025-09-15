#   autor: Vinist021;
#   data: 19/02/2025;
#   nome: Ordenação por Tamanho;

N = int(input())

for _ in range(N):
    frase = input()
    palavras = frase.split()

    palavras.sort(key=lambda x: (-len(x)))

    tam = len(palavras)

    for i in range(tam):
        if i < tam-1:
            print(palavras[i], end=' ')
        else:
            print(palavras[i])
