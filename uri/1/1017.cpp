#include <iostream>
#include <iomanip>

using namespace std;

float jCar, spentTime, avgSpeed;

int main() {
    cin >> spentTime;
    cin >> avgSpeed;
    
    jCar = (avgSpeed*spentTime) / 12;
   
    cout << fixed << setprecision(3) << jCar << endl;
 
    return 0;
}