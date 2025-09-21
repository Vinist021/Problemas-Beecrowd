#   autor: Vinist021;
#   data: 14/02/2025;
#   nome: A Batalha dos Cinco Exércitos;

H, E, A, O, W, X = map(int, input().split())

TBom = H + E + A + X
TRuim = O + W

if TBom >= TRuim:
    print('Middle-earth is safe.')
else:
    print('Sauron has returned.')