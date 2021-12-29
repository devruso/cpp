#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

float x=0,N=0,c=1,s=1,k;

while(s<39){
    if(s==3){
        c = 2;
    }
    x = s/c;
    N+= x;
    s+=2;
    c*=2;
}
cout<<fixed<<setprecision(2)<< N << endl;
 
    return 0;
}