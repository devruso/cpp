#include <iostream>
 
using namespace std;
 
int main() {
 
int T, N[1000],C=0;

    cin >> T;

    while (C<1000){
        for(int i = 0; i<T;i++){
            if(C > 999){
                break;
            }
            if(N[i]<T){
                cout << "N[" <<C << "] = "<<i <<endl; 
                C++; 
            }else{
                N[i] = 0;
                cout << "N["<<C<<"] = "<< i << endl;
                C++;
            }
        }
    }    
 
    return 0;
}