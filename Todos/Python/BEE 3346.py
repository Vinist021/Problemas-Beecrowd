#   autor: Vinist021;
#   data: 20/02/2025;
#   nome: Flutuação do PIB;

def flutcalc(n1, n2):
    n1 = n1 + 100
    n2 = n2 + 100
    flut = (n1 * n2) - 10000
    return flut / 100

F1, F2 = map(float, input().split())

print(f'{flutcalc(F1, F2):.6f}')