n = list(map(int, input().split()))
l = []


for i in range(n[1]):
    l.append(0)
for i in range(n[0]):
    x = int(input())
    for i in range(0,n[1],x):
        l[i] = 1   

print(*l, sep=" ")


    