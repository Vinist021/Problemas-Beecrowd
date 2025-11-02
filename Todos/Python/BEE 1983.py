#   autor: Vinist021;
#   data: 28/12/2024;
#   nome: O Escolhido;

N = int(input())
L = []
i = 0
while i < N:
    dadosAluno = input().split()
    tuplaAluno = (int(dadosAluno[0]), float(dadosAluno[1]))
    L.append(tuplaAluno)
    i += 1

L.sort(key=lambda x: -x[1])

if L[0][1] >= 8:
    print(L[0][0])
else:
    print('Minimum note not reached')
