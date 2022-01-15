def trailingZeros(N):
    ans = 0
    i = 5
    while N//(i):
        ans += N//(i)
        i *= 5
    return ans


N = int(input())
print(trailingZeros(N))
