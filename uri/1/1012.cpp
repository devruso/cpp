#include <iostream>
#include <iomanip> 
using namespace std;
 
 double A,B,C;
 double pi = 3.14159;

int main() {
 
    cin >> A >> B >> C;

    float triang,circ,trapez,quadra,retang;

    triang = C*A/2;
    circ = pi *(C*C);
    trapez = (A + B)/2 * C;
    quadra = B*B;
    retang = A*B;
 
    cout << fixed << setprecision(3) << "TRIANGULO: " <<triang <<endl;
    cout << fixed << setprecision(3) << "CIRCULO: " <<circ<<endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " <<trapez<<endl;
    cout << fixed << setprecision(3) << "QUADRADO: " <<quadra<<endl;
    cout << fixed << setprecision(3) << "RETANGULO: " <<retang<<endl;

    return 0;
}