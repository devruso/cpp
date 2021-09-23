#include <iostream>
 
using namespace std;
 int A,B,C;
int main() {

        cin >> A >> B >> C;
    
    if (A < B && A < C){
        cout << A << endl;
        if (B > C){
            cout << C << endl;
            cout << B << endl;
        }else {
            cout << B << endl;
            cout << C << endl;
            }
        }
    if(B < A && B < C){
            cout << B << endl;
            if(C < A){
            cout << C << endl;
            cout << A << endl;
            }else {
            cout << A << endl;
            cout << C << endl;
            }
        }
    if(C<A && C<B){
            cout << C << endl;
            if(B>A){
            cout << A << endl;
            cout << B << endl;
            }else {
            cout << B << endl;
            cout << A << endl;
            }
        }
    cout << ""<< endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    return 0;
    }




    
