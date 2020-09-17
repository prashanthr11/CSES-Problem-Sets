from collections import Counter as di

def solve(s):
    d = di(s)
    oddcnt = 0
    char = ''
    for i in d:
        if d[i] % 2:
            oddcnt += 1
            char = i
    if oddcnt > 1 or (oddcnt == 1 and len(s) % 2 == 0):
        return "NO SOLUTION"
    front = ""
    back = ""
    for i in d:
        t = d[i] // 2
        front += (i * t)
        back = (i * t) + back
    if len(s) % 2:
        return front + char + back
    else:
        return front + back

    
s = input()
print(solve(s))