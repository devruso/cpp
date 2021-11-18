n, m = map(int,input().split())
z =[]
c = 0
x = 0
y = 0
for i in range(n):
    lista = [0]*n
    z.append(lista)
    z[i] = list(map(int, input().split()))

for j in range(len(z)):
    c=0
    x = 0
    y = 0
    for k in range(len(z)):
        print(z[j][k])
        x = 0
        if z[j][k] == 0:
            c+=1
            x += j
            y += k
        if c == 2:
            print(c,x,y)
