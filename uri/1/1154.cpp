#include <iostream>
#include <iomanip> 
using namespace std;
 


int main() {
int N,c=0;
float x=0;
while(N>=0){
    cin >> N;
    if(N<0){
    break;
    } 
    c++;
    x+=N;   
}  
cout<<fixed<<setprecision(2) << x/c << endl;
return 0;
}