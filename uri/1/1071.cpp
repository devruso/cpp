#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
    int X,Y,sum;
    sum = 0;
    cin >> X >>Y;
            for(int i=Y+1;i<X;i++){
            if(i%2 != 0){ 
            sum+=i;
            }
            
        }
        cout<< sum <<endl;
        return 0;
    }