#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double  x1,c1,x2,c2;
double d;

int main() {
    
    cin >> x1 >> c1;
    cin >> x2 >> c2;
    
    d = sqrt(pow(x2 - x1,2) + pow(c2 - c1,2));
    
    cout << fixed << setprecision(4) << d << endl;
    return 0;
}