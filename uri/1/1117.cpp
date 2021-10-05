#include <iostream>
#include <iomanip> 
using namespace std;

float n=-1,m=-1,c,x; 
int main() {

    
    
    while(n<0 | n>10){
       cin >> n; 
       if(n<0 | n>10){
        cout << "nota invalida" << endl;   
       }
        
    }
    while(m<0 | m>10){
        cin >> m;
        if(m<0 | m>10){
          cout << "nota invalida" << endl;  
        }
        
    }

    c = (n+m)/2;
        cout <<fixed<<setprecision(2)<< "media = "<<c<<endl;
    return 0;
}