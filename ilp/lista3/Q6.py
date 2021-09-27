N,M = map(int,input().split())
maior=0
soma = 0
for i in range(N):
    M = input().split()
    soma = 0
    for k in M:
        k = int(k)
        soma += k
        print (k)
        if(soma>maior):
            maior = soma   
print(maior)    
    