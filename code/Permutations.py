def permutations(N):
    if 1 < N < 4:
        print('NO SOLUTION')
    else:
        for i in range(N-1,0,-2):
            print(i, end = " ")
        for i in range(N, 0,-2):
            print(i, end = " ")

N = int(input())
permutations(N)