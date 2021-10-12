#include <iostream>
 
using namespace std;
 
int main() {
int a,n,c=0; 
    
    cin >> a >> n;
   while (n<=0){
        cin >> n;
    }
    for(int i=0;i<n;i++){
        c+= i + a ;
    }
    cout << c  << endl;
    
    return 0;
}