#include <iostream>
#include <cmath> 
using namespace std;
int A1, A2,B; 
int main() {
     cin >> A1 >> A2;
    if(A1>A2){
        B = abs((A1 - A2)-24);
        cout << "O JOGO DUROU "<<B<<" HORA(S)" << endl;
    } else if(A1 == A2 ){
        cout << "O JOGO DUROU "<<24<<" HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU "<<A2-A1<<" HORA(S)" << endl;
    }
 
    return 0;
}