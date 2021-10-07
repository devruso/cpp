n = int(input())

for i in range(n):
    a,b,c = map(int,input().split())

    h += a*b + c

print(h)