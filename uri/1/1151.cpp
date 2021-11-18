#include <iostream>
 
using namespace std;
 
int main() {

int n,x[46];
x[0] = 0;
x[1] = 1;
    cin >> n;
   for(int i=0; i< n;i++){
       x[i] = x[i-1] + x[i-2];
        if (i == 0){
            x[i] = 0;
        }else if (i == 1){
            x[i] = 1;
        }
        if (i == n - 1){
            cout << x[i];
        }else{
            cout << x[i] << " ";
        }
   }
cout << endl; 
    return 0;
}