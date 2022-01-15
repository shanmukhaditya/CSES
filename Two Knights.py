def twoKnights(k):
    for i in range(1,k+1):
        a1 = i**2
        a2 = a1*(a1-1)/2
        if i >2:
            a2 -= 4*(i-1)*(i-2)
        print(int(a2))

twoKnights(int(input()))