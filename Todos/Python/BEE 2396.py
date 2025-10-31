#   autor: Vinist021;
#   data: 31/12/2024;
#   nome: Corrida;

N, M = map(int, input().split())

carros = []

i = 0
while i < N:

    x = tuple(map(int, input().split()))

    carros.append(x)

    tempos = [sum(tupla) for tupla in carros]

    i += 1

temposOrdenados = sorted(tempos)

print(tempos.index(temposOrdenados[0])+1)
print(tempos.index(temposOrdenados[1])+1)
print(tempos.index(temposOrdenados[2])+1)
