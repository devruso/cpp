#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
 
int main() {
long long int n,b=1; 

    
        
        while(b<=n){
            cin >> n;
            do{
            cout<<fixed<<setprecision(0)<<b<<" "<<pow(b,2)<<" "<<pow(b,3) << endl;
            
            cout<<fixed<<setprecision(0)<<b<<" "<<pow(b,2)+1<<" "<<pow(b,3)+1 << endl;
            b++;    
            }while(b<=n);
            
        }
    return 0;
}