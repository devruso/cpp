A = int(input())
Y = []

for i in range(A):
    Z = [0]*A
    Y.append(Z)
    Y[i] = list(map(int,input().split()))

H,R = map(int,input().split())

for k in Y:
    
    for j in Y:

print('Y',Y,'H R =', H,R )