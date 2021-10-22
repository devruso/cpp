n = int(input())
a = input().split()
a = list(map(int, a))
x = int(input())
z = 0

print(a)

for i in a:
    if i == x:
        z = i
    elif a[i] != x:
        z = -1
         
        
print(z)
        