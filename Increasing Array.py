def increasingArray(arr, N):
    ans, prev = 0, 0
    for i in arr:
        prev = max(prev, i)
        ans += prev - i
        

    return ans


N = int(input())
arr = map(int, input().split())

print(increasingArray(arr, N))
