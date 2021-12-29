#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

float x,N=0,c=0;

while(c<100){
    c++;
    x = 1/c;
    N+= x;
    cout <<fixed<< setprecision(2)<< " N: " << N;
}
cout<<fixed<<setprecision(2)<< N << endl;
 
    return 0;
}