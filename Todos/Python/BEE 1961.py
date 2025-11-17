#   autor: Vinist021;
#   data: 24/12/2024;
#   nome: Pula Sapo;

PuloeCanos = input().split()
P = int(PuloeCanos[0])
N = int(PuloeCanos[1])

tamanhos = list(map(int, input().split()))

i = 0
while i < (len(tamanhos) - 1):
    diferenca = tamanhos[i+1] - tamanhos[i]
    if diferenca > P:
        print('GAME OVER')
        exit(0)
    if diferenca < 0 and -diferenca > P:
        print('GAME OVER')
        exit(0)

    i += 1

print('YOU WIN')

