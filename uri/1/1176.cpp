#include <iostream>
using namespace std;

// Quase 10 horas até chegar nisso...
 
int main() {
 
int Fib,C=0,T;
long long V[61];
V[0]=0;V[1]=1;V[2]=1;
    cin >> T;
    while(C<T){
        cin >> Fib;
        for(int i = 2; i<61; i++){
            V[i] = V[i-1] + V[i-2];
        }
        cout <<"Fib("<<Fib << ") = " << V[Fib] << endl;
        C++;
    }
    return 0;
}