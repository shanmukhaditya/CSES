def palindromeReorder(S):
    d, counter = {c: 0 for c in range(26)}, 0
    for i in S:
        d[ord(i) - ord('A')] += 1
        if d[ord(i) - ord('A')] % 2 == 0:
            counter -= 1
        else:
            counter += 1
    if counter > 1:
        print("NO SOLUTION")
    else:
        ans = ""
        for i in range(26):
            if d[i]&1^1:
                for j in range(d[i]//2):
                    ans = ans + chr(i+65)
        print(ans, end="")
        for i in range(26):
            if d[i]&1:
                for j in range(d[i]):
                    #mid = mid + chr(i+65)
                    print(chr(i+65), end="")
        print(ans[::-1], end="")


S = input()

palindromeReorder(S)
