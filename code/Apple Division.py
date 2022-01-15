def appleDivision(arr, N):
    s, ans = sum(arr), 0

    for i in range(1<<N):
        cs = 0
        for j in range(N):
            if i>>j&1:
                cs += arr[j]
        if cs <= s/2:
            ans = max(cs, ans)
    return s-2*ans


N = int(input())
arr = map(int, input().split())
print(appleDivision(list(arr), N))