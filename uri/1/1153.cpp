#include <iostream>
 
using namespace std;

int main() {

int N=0,c,x=1;
cin >> N;
c = N;

while(c!=1){
    if(c == 0){
        x = 1;
    break;
    }
    x*=c--;
}

cout <<x<<endl;

return 0;
}