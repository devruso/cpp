#include <iostream>
 
using namespace std;
 
int main() {
 
int N=-1, c=0,x=0;

while(N!=0){
    N= -1;
    cin >> N;
    if(N ==0){
        break;
    }
    if(N%2 != 0){
        N++;
    }
    
    while(c<5){
        x+=N;
        c++;
        N+=2;
    }
    cout << x << endl;
    c=0;
    x=0;
}
 
    return 0;
}