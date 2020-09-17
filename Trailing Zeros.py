n = int(input())
ans = 0
i = 5
while i <= n:
    ans += int(n / i)
    i *= 5
print(ans)