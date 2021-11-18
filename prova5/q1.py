m = []
x = 0
for i in range(7):
    lista = [0]*7
    m.append(lista)
    m[i] = list(map(int, input().split()))
for l in range(7):
    for k in range(7):
        if m[l][k] == 1:
            x+=1
        if m[k][l] == 1:
            m[k][l] = 0        
    
print(x)