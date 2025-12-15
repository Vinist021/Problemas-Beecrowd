#   autor: Vinist021;
#   data: 21/12/2024;
#   nome: Exame Geral;

try:
    while True:
        N, Q = map(int, input().split())
        notas = []

        i = 0
        while i < N:

            notas.append(int(input()))

            i += 1

        notas.sort(reverse=True)

        j = 0
        while j < Q:

            posicao = int(input())
            print(notas[posicao-1])

            j += 1

        notas.clear()

except EOFError:
    exit(0)
