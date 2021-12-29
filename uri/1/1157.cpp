#include <iostream>
 
using namespace std;
 
int main() {

int N,c=1,x;
cin >> N;

while(c<=N){
    if(N%c == 0){
        cout << c << endl;
    }
    c++;
}

 
    return 0;
}