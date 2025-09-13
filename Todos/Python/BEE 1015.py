#   autor: Vinist021;
#   data: 30/10/2024;
#   nome: Cédulas;

Qt100 = 0
Qt50 = 0
Qt20 = 0
Qt10 = 0
Qt5 = 0
Qt2 = 0
Qt1 = 0
N = int(input())
NInicial = N

while N >= 100:
    N = N - 100
    Qt100 += 1

while N >= 50:
    N = N - 50
    Qt50 += 1

while N >= 20:
    N = N - 20
    Qt20 += 1

while N >= 10:
    N = N - 10
    Qt10 += 1

while N >= 5:
    N = N - 5
    Qt5 += 1

while N >= 2:
    N = N - 2
    Qt2 += 1

while N >= 1:
    N = N - 1
    Qt1 += 1

print(NInicial)
print(f'{Qt100} nota(s) de R$ 100,00')
print(f'{Qt50} nota(s) de R$ 50,00')
print(f'{Qt20} nota(s) de R$ 20,00')
print(f'{Qt10} nota(s) de R$ 10,00')
print(f'{Qt5} nota(s) de R$ 5,00')
print(f'{Qt2} nota(s) de R$ 2,00')
print(f'{Qt1} nota(s) de R$ 1,00')
