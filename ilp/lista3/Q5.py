N,P = map(int,input().split())

controle = 1
while N > 0 | P>0:
    N=N - P
    controle += 1 
    P-=1
    print(N,P,controle)

if P <=0:
        print('F')
else:
        print(controle)    
