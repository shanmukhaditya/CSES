def twoSets(N):
    a, b, j = [], [], 0

    if N*(N+1)/2 % 2 == 0:
        if N%4 :
            j = 3
            a.append(1)
            a.append(2)
            b.append(3)
        else: 
            j =4
            a.append(1)
            a.append(4)
            b.append(2)
            b.append(3)


        for i in range((N-1)//4):
            a.append(4*i + 1 +j)
            a.append(4*i + 4 +j)
            b.append(4*i + 2 +j)
            b.append(4*i + 3 +j)
        


        print('YES')
        print(len(a))
        print(*a)
        print(len(b))
        print(*b)
    else:
        print('NO')

twoSets(int(input()))