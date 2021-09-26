T = int(input())
maior = 0;
while T != 0:
    T = int(input())
    if T > maior:
        maior = T;
        
if maior > T:
            print('ALARME')
else:
            print('O Havai pode dormir tranquilo')