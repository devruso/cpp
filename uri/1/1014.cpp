#include <iostream>
#include <iomanip>

using namespace std;
int X;
double Y;
float Z;

int main() {
    cin >> X;
    cin >> Y;
    Z = X/Y;
    
    cout << fixed << setprecision(3) << Z << " km/l" << endl;
    return 0;
}