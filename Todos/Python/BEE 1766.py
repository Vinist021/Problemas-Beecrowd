#   autor: Vinist021;
#   data: 24/12/2024;
#   nome: O Elfo das Trevas;

T = int(input())

i = 0
while i < T:
    N, M = map(int, input().split())
    DRenas = []

    j = 0
    while j < N:

        strdados = list(input().split())

        # nome | peso | idade | altura
        #  0       1      2       3
        dados = (strdados[0], int(strdados[1]), int(strdados[2]), float(strdados[3]))

        DRenas.append(dados)
        j += 1

    ordenada = sorted(DRenas, key=lambda x: (-x[1], x[2], x[3], x[0]))

    print(f'CENARIO {{{i+1}}}')
    k = 0
    while k < M:

        print(f'{k+1} - {ordenada[k][0]}')

        k += 1

    i += 1
