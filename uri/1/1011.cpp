#include <iostream>
#include <iomanip> 
using namespace std;
 double  R,vol;
 double pi = 3.14159;
int main() {
    cin >> R;
   vol = (4.0/3)*pi*(R*R*R);
   
    cout << fixed << setprecision(3)<<"VOLUME = "<<vol<<endl;
    return 0;
}