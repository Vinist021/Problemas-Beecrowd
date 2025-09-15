#   autor: Vinist021;
#   data: 17/02/2025;
#   nome: Montes Claros;

N = int(input())

montes = []

for _ in range(N):
    dados = tuple(map(int, input().split()))
    montes.append(dados)

montes.sort(key = lambda x: (x[0]))

for i in range(N-1):
    if montes[i+1][1] > montes[i][1]:
        print('N')
        exit(0)
print('S')
