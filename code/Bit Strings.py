def bitStrings(N):
    m = 10**9 +7
    
    return (2)**N %m

N = int(input())
print(bitStrings(N))