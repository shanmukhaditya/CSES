def missingNumber(arr, N):
    ans = [0]*(N+1)
    for i in arr:
        ans[i] = 1
    for i in range(1,N+1):
        if ans[i] == 0:
            return i
def missingNumberEff(arr, N):
    ans = (N*(N+1))/2
    for i in arr:
        ans -= i
    return int(ans)


N = int(input())
arr = map(int, input().split())
print(missingNumberEff(arr, N))
