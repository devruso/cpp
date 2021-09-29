#include <iostream>
 
using namespace std;
 
int main() {
    int N,P;
    P =0;
    for(int i=1;i<=5;i++){
        cin >> N;
            
        if(N%2 == 0){
            P+=1;

        }       
        
    }
    cout << P << " valores pares" << endl;
        
            
 
    return 0;
}