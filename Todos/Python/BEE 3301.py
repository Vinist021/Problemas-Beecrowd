#   autor: Vinist021;
#   data: 15/02/2025;
#   nome: Sobrinho do Meio;

H, Z, L = map(int, input().split())
l = [H, Z, L]
l.sort()

if l[1] == H:
    print('huguinho')
elif l[1] == Z:
    print('zezinho')
else:
    print('luisinho')