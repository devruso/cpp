n, m = map(int,input().split())
z =[]
c = 0
x = 0
y = 0
for i in range(n):
    lista = [0]*n
    z.append(lista)
    z[i] = list(map(int, input().split()))

for j in range(n): 
    x = 0
    y = 0
    w = 0
    for k in range(m):
        if z[j][k] == 0:
            c+=1
            x = j + 1
            w = k + 1
            if c == 2:
                y = w - 1 
                print('Fileira: ',x)
                print('Assentos: ', y,'e ',w)
                break
        else:
                c = 0
    
        