n = int(input())
l = list(map(int, input().split()))

l.sort()

mean = l[len(l) // 2]
ans = 0

for i in l:
    ans += abs(i - mean)
    

print(ans)
