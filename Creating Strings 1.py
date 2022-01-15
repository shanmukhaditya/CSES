from itertools import permutations
def creatingStrings1(S):
    ans = set(permutations(S))
    print(len(ans))
    for i in sorted(ans):
        print("".join(i))

S = input()
creatingStrings1(S)