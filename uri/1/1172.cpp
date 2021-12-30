#include <iostream>
 
using namespace std;
 
int main() {

    int X[10],N, c;

    
    for (int i = 0; i<10;i++){
        cin >> N;

        if(N <= 0){

            X[i] = 1;
            cout <<"X[" <<i << "] = " << X[i] << endl;
        }else{

            X[i] = N;
            cout <<"X[" <<i << "] = " << X[i] << endl;
        }
        
    }
    
 
    return 0;
}