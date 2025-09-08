#   autor: Vinist021;
#   data: 29/10/2024;
#   nome: Tempo de Jogo com Minutos;

entrada = input()

dados = list(map(int, entrada.split()))

HI = dados[0]
MI = dados[1]
HF = dados[2]
MF = dados[3]

HI = HI * 60
HF = HF * 60

TT = (HF - HI) + (MF - MI)

if TT > 0:
    MT = TT % 60
    HT = TT // 60
elif TT < 0:
    TT = 1440 + TT
    MT = TT % 60
    HT = TT // 60
else:
    HT = 24
    MT = 0

print(f'O JOGO DUROU {HT} HORA(S) E {MT} MINUTO(S)')
