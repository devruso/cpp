#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;
 
double R1,R2,D,B1,D1,A,B,C; 

int main() {

  cin >> A >> B >> C;

    B1 = pow(B,2.0);
    D = B1 - (4*A*C);
    
 if (D >= 0 & A != 0){

     D1 = sqrt(D);
     R1 = ((-B + D1) / (2*A));
     R2 = ((-B - D1) / (2*A));

        cout << setprecision(5) << fixed << "R1 = " << R1 << endl;
        cout << setprecision(5) << fixed << "R2 = "<< R2 << endl;
 } else {
             cout << "Impossivel calcular" << endl;

 };

 
 
     


    return 0;
}