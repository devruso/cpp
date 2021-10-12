#include <iostream>
 
using namespace std;
 
int main() {
int x,z,c=0,i=0;
    cin >> x >> z;
    while (z <= x){
           cin >> z; 
    }
        while(c<z){
            c += x + i;
            i++;
        }

    cout << i << endl;

    return 0;
}