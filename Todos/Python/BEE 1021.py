#   autor: Vinist021;
#   data: 02/11/2024;
#   nome: Notas e Moedas;

Valor = float(input()) * 100

Qt100 = 0
Qt50 = 0
Qt20 = 0
Qt10 = 0
Qt5 = 0
Qt2 = 0
Qt1 = 0

Md50 = 0
Md25 = 0
Md10 = 0
Md5 = 0
Md1 = 0

while Valor >= 10000:
    Valor = Valor - 10000
    Qt100 += 1

while Valor >= 5000:
    Valor = Valor - 5000
    Qt50 += 1

while Valor >= 2000:
    Valor = Valor - 2000
    Qt20 += 1

while Valor >= 1000:
    Valor = Valor - 1000
    Qt10 += 1

while Valor >= 5000:
    Valor = Valor - 5000
    Qt50 += 1

while Valor >= 500:
    Valor = Valor - 500
    Qt5 += 1

while Valor >= 200:
    Valor = Valor - 200
    Qt2 += 1

while Valor >= 100:
    Valor = Valor - 100
    Qt1 += 1

while Valor >= 50:
    Valor = Valor - 50
    Md50 += 1

while Valor >= 25:
    Valor = Valor - 25
    Md25 += 1

while Valor >= 10:
    Valor = Valor - 10
    Md10 += 1

while Valor >= 5:
    Valor = Valor - 5
    Md5 += 1

while Valor >= 1:
    Valor = Valor - 1
    Md1 += 1

print('NOTAS:')
print(f'{Qt100} nota(s) de R$ 100.00')
print(f'{Qt50} nota(s) de R$ 50.00')
print(f'{Qt20} nota(s) de R$ 20.00')
print(f'{Qt10} nota(s) de R$ 10.00')
print(f'{Qt5} nota(s) de R$ 5.00')
print(f'{Qt2} nota(s) de R$ 2.00')

print('MOEDAS:')
print(f'{Qt1} moeda(s) de R$ 1.00')
print(f'{Md50} moeda(s) de R$ 0.50')
print(f'{Md25} moeda(s) de R$ 0.25')
print(f'{Md10} moeda(s) de R$ 0.10')
print(f'{Md5} moeda(s) de R$ 0.05')
print(f'{Md1} moeda(s) de R$ 0.01')
