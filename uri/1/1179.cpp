#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,C=0,Z[15],xp=0,xi=0,P[5],I[5];
    
    while(C<15){
        cin >> N;
        if(N%2==0){
            P[xp] = N;
            xp++;
            if(xp == 5 & C<=10){
                for(int i = 0;i<5; i++){
                    cout << "par[" << i <<"]= " << P[i] << endl;
                } 
                xp=0;       
                }
                
            }else if(N%2!=0){
            I[xi] = N;
            xi++;
            if(xi == 5 & C<=10){
                for(int j = 0; j<5; j++){
                    cout << "impar[" << j <<"]= " << I[j] << endl;
                }
                xi=0;
            }  
        } 
        C++;
        if(C==15){
            for(int a = 0; a<xi;a++){
                cout << "impar[" << a <<"]= " << I[a] << endl;

            }
            for(int b = 0; b<xp;b++){
                cout << "par[" << b <<"]= " << P[b] << endl;

            }
        }
    }
    return 0;
}