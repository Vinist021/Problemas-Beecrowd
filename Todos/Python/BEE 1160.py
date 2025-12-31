#   autor: Vinist021;
#   data: 18/12/2024;
#   nome: Crescimento Populacional;

T = int(input())

i = 0
while i < T:

    PA, PB, G1, G2 = map(float, input().split())
    int(PA)
    int(PB)

    tempo = 0
    while PA <= PB:
        PA = int(PA * (1 + (G1 / 100)))
        PB = int(PB * (1 + (G2 / 100)))

        tempo += 1

        if tempo > 100:
            print('Mais de 1 seculo.')
            break

    if tempo <= 100:
        print(f'{tempo} anos.')

    i += 1
