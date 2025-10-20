#   autor: Vinist021;
#   data: 23/12/2024;
#   nome: Quadro De Medalhas;

N = int(input())
pais = []

i = 0
while i < N:

    x = tuple(input().split())
    x = (x[0], int(x[1]), int(x[2]), int(x[3]))
    pais.append(x)

    i += 1

pais.sort(key=lambda x: (-x[1], -x[2], -x[3], x[0]))

for p in range(len(pais)):
    print(f'{pais[p][0]} {pais[p][1]} {pais[p][2]} {pais[p][3]}')