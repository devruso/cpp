#include <iostream>
 
using namespace std;
int a,b,x;


int main() {
 
    cin >> a >> b;

    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    for(int i=a+1;i<b;i++){
        if(i%5 == 2 || i%5 == 3){
            cout << i << endl;
        }
    }
    return 0;
}