def numberSpiral(y, x):
    if x < y:
        if y % 2 == 0:
            ans = y**2 - x + 1
        else:
            ans = (y-1)**2 + x 
    else:
        if x % 2 != 0:
            ans = x**2 - y + 1
        else:
            ans = max(x-1,1)**2 + y 
    return ans

N = int(input())
for i in range(N):
    arr = input().split()
    print(numberSpiral(int(arr[0]), int(arr[1])))

