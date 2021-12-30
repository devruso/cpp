#include <iostream>
 
using namespace std;
 
int main() {

int N, x,y=0,c=0,k=0;
cin >> N;
while(c<N){
    cin >> x;

    while(y<x-1){
        y++;
        if(x%y == 0){
            k+=y;
        }     
    }
    if(k == x){
        cout << x << " eh perfeito" << endl;
    }else{
        cout << x << " nao eh perfeito"<< endl;
    }

    c++;
    k=0;
    y=0;
} 
    return 0;
}