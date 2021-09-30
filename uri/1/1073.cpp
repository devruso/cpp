#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
 
int main() {
    int X;
    cin >> X;
            for(int i =1;i<=X;i++){
            if(i%2 == 0){ 
            cout <<fixed<<setprecision(0)<< i << "^" << 2 << " = "<< pow(i,2) <<endl;
            }
            
        }
        
        return 0;
    }