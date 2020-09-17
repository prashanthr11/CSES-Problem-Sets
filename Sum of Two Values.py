from collections import Counter as di

def check(l, k):
    c = di(l)
    if len(l) == 1:
        return "IMPOSSIBLE"        
            
    for i in range(len(l)):
        if c[k - l[i]]:
            tmp = l.index(k - l[i])
            if tmp != i:
                return i + 1, l.index(k - l[i]) + 1
        
    return "IMPOSSIBLE"
    
n, k = list(map(int, input().split()))
l = list(map(int, input().split()))

x = check(l, k)
if x != "IMPOSSIBLE":
    print(*x)
else:
    print(x)