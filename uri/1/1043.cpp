#include <iostream>
 
using namespace std;
int A,B,C,D;

int main() {
    cin >> A >> B;
    C = B%A;
    D = A%B;
    if(C == 0 | D == 0){
        cout << "Sao Multiplos" << endl;
    }else {
        cout << "Nao sao Multiplos" << endl;
    }
    
 
    return 0;
}

