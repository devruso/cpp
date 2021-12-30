#include <iostream>
 
using namespace std;
 
int main() {
 
    int N[10],X;

    cin >> X;
    int c = 1;
    for(int i = 0; i<10; i++){
        
        N[i] = X*c;
        cout <<"N["<<i << "] = "<< N[i] << endl;
        c*=2;
    }    
 
    return 0;
}