#include <iostream>
#include <iomanip> 
using namespace std;

float X,Y;
float Total;

int main() {
 
    cin >> X >> Y;

    if ( X == 1){
        cout <<fixed<<setprecision(2)<<"Total: R$ "<< 4.0*Y << endl;
    }else if (X == 2) {
        cout <<fixed<<setprecision(2)<<"Total: R$ "<< 4.5*Y << endl;
    }else if (X == 3){
        cout <<fixed<<setprecision(2)<<"Total: R$ "<< 5.0*Y << endl;
    }else if (X == 4){
        cout <<fixed<<setprecision(2)<<"Total: R$ "<< 2.0*Y << endl;
    }else if (X == 5)
        cout <<fixed<<setprecision(2)<<"Total: R$ "<< 1.5*Y << endl;
    return 0;
}