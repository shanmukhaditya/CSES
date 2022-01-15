def repetitions(s):
    ans, c = 1, 0
    l = 'A'
    for i in s:
        if i == l:
            c += 1 
            ans = max(c, ans)
        else:
            l = i
            c = 1
    
    return ans


S = input()
print(repetitions(S))
