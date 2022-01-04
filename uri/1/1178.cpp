#include <iostream>
#include <iomanip>  
using namespace std;
 
int main() {
    int N[100];
    double T;
    cin >> T;
    for(int i =0; i<100;i++){
        N[i] = T;
        cout <<fixed<<setprecision(4)<< "N["<<i<<"] = " << T << endl;
        T/=2;
    }
    return 0;
}