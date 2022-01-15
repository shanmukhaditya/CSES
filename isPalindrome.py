def isPalindrome(S):
    return S == S[::-1]

f = open("user_output.txt","r")
S = f.read().replace("\n","")
f.close()

print(isPalindrome(S))