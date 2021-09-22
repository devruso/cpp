#include <iostream>
 
using namespace std;
int N, A,M,D,Z;

int main() {
    cin >> N;
   
    A = N/365;
        Z = N%365;
        N= Z;

    M = N/30;
        Z = N%30;
        N = Z;
    D = N;

    cout << A << " ano(s)" << endl;
    cout << M << " mes(es)" << endl;
    cout << D << " dia(s)" << endl;


    return 0;
}