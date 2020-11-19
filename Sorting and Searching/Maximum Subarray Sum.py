def kadane(l):
	glo = cur = l[0]
	for i in range(1, len(l)):
		cur = max(l[i], cur + l[i])
		if glo < cur:
			glo = cur
	return glo	
 
n = int(input())
l = list(map(int, input().split()))
print(kadane(l))
