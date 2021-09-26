N,Xp,Xp0 = map(int, input().split())
i=1
for i in range(N):
    Xp1,M = map(int, input().split())

    if(Xp0 > Xp1):
        print(Xp1,M)
    else: 
        Xp1+=Xp
        M+=1
        print(Xp1,M)
    
    