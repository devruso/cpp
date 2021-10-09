#include <iostream>
 
using namespace std;
int a,b,x,z;

int main() {
    cin >> a >> b;
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    for(int i=a; i<=b;i++){
        if(i%13 !=0){
            z+=i;
        }
    }
    cout << z <<endl;
 
    return 0;
}