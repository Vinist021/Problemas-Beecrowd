#   autor: Vinist021;
#   data: 21/02/2025;
#   nome: Carrega ou não Carrega?;

try:
    while True:
        A, B = map(int, input().split())
        result = A ^ B
        print(result)
except EOFError:
    exit(0)