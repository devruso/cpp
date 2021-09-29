#include <iostream>
 
using namespace std;
 
int main() {
    int N,X,a,b;
    a=0;
    b=0;
    cin >>  N;
    for(int i=1;i<=N;i++){
        cin >> X;
        if (X>=10 & X<=20){
            a++;
        }else{
            b++;
        }
    
    }
    cout << a <<" in"<< endl;
    cout << b <<" out"<< endl;
    return 0;
}