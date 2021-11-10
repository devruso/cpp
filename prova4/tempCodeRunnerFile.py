a = list(map(int,input().split()))
v = list(map(int, input().split()))
dmg = list(map(int, input().split()))
highest = 0
c = 0
x= 0

for i in range(a[1]):
    if i == 0 and v[i] <= a[0]:
        highest = v[i]
        c = dmg[i]
        x += 1
    if dmg[i] > c and v[i] <= a[0]:
        highest = v[i]
        c = dmg[i]
        x += 1

if x > 1:
    print(highest, c)
else:
    print("Yan Pobre")