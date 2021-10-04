#include <iostream>
 
using namespace std;
 
int main() {
    int M=1,N=1,sum,x;
    sum=0;

    
        

    while(M > 0 & N > 0){
        cin >> M >> N;

        if(N>M){
            x=N;
            N=M;
            M=x;
        }
        if(N <= 0 | M <= 0){
            return 0;
        }        
        for(int i=N;i<=M;i++){
            sum+=i;
            cout <<i<<" ";

        }
    cout <<"Sum=" << sum << endl;
    sum = 0;
    }
    
    return 0;
}