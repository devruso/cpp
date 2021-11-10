n = int(input())
l = list(map(int, input().split()))
y = int(input())
z = []
n = []
y = y / 2


for j in range(len(l)):
        if l[j] >= y:
            z.append(j)    

print(*z, sep = " ")