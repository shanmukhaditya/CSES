def coinPiles(a, b):
    if (a+b)%3 == 0 and 2*a>=b and 2*b>=a:
        print('YES')
    else:
        print('NO')

N = int(input())
for i in range(N):
    a, b = map(int, input().split())
    coinPiles(a, b)
