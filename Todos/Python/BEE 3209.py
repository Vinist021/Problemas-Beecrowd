#   autor: Vinist021;
#   data: 29/02/2025;
#   nome: Tomadas Elétricas;

N = int(input())

for _ in range(N):
    l = list(map(int, input().split()))
    K = l[0]
    l.pop(0)

    total = 0
    for i in l:
        total += i

    total = total - (K-1)
    print(total)