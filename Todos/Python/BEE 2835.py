#   autor: Vinist021;
#   data: 11/02/2025;
#   nome: Elevador;

N = int(input())

pesos = list(map(int, input().split()))

pesos.insert(0, 0)

pesos.sort()

for i in range(1, N+1):
    if pesos[i] - pesos[i-1] > 8:
        print('N')
        exit(0)
else:
    print('S')
