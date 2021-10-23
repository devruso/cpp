n = int(input())
l = list(map(int,input().split()))
x = int()
j = int()
for i in l:
    x+=i
x = x//2
n = 0

for i in l:
    if j < x:
        j+=i
        n+=1
print(n)