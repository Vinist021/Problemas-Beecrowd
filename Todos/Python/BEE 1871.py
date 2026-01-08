#   autor: Vinist021;
#   data: 17/12/2025;
#   nome: Zero vale Zero;

a, b = 1, 1

while True:
    a, b = map(int, input().split())

    if a == 0 and b == 0:
        break

    soma = a + b
    strSoma = str(soma)

    strSoma = strSoma.replace('0', '',)

    print(strSoma)
