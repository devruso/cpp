n = int(input())
z = list(map(int, input().split()))
x = int(input())
n = x

for i in z:
    if x <= 0:
        break
    if i == 1:
        x = n
    elif i > 1:
        x-=i
    else:
        x-=0

if x <= 0:
    print('You Died')
else:
    print('Yes, you can') 