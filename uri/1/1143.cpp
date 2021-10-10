#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
 
    int n,a=1,b=1;
        cin >> n;
    while(b<=n){
        
        do{
                cout<<a<<" "<<pow(a,2)<<" "<<pow(a,3) << endl;
                a+=1;
                b+=1;
            
            
        }while(b<=n);
    }
 
    return 0;
}