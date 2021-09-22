#include <iostream>
 
using namespace std;

int A,B,C,D;

int main() {
    
    cin >> A >> B >> C >> D;
    
    if  (B > C & D > A  & C + D > A + B & C>0 & D > 0) {

        cout << "Valores aceitos" << endl;

    }
    else {
        cout << "Valores nao aceitos" << endl;
    };

    return 0;
}