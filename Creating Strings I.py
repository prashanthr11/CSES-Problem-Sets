from itertools import permutations as perm

def solve(s):
    s = list(set(list(perm(s))))
    s = [''.join(i) for i in s]
    print(len(s))
    for i in sorted(s):
        print(i)


s = input()
solve(s)