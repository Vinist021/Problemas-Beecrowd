#   autor: Vinist021;
#   data: 26/12/2024;
#   nome: Prefácio;

a, b = map(int, input().split())

q = a // b
r = a % b

if r < 0 and b > 0:
    r += b
    q -= 1
elif r < 0 and b < 0:
    r -= b
    q += 1

print(f'{q} {r}')
