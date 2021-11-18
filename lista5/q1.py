n = int(input())
m =  []
x = -1
for i in range(10):
    z = list(map(int, input().split()))
    m += z
for l in m:
        x = l
        if l == n:
            print('sim')
            break
if l != n:
            print('nao')
            

