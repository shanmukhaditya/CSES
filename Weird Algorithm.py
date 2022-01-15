def weirdAlgo(N):
    print(N, end=' ')
    while N != 1:
        if N % 2 == 0:
            N /= 2
        else:
            N = N*3 + 1

        print(int(N), end=' ')


N = int(input())
weirdAlgo(N)
