#include <iostream>
#include <iomanip> 
using namespace std;

float n,m,c,x,a,b,z=0,q; 
int main() {

    while(q != 2){
        do{
        cin >> n;  
        if(n< 0 || n > 10){
            cout << "nota invalida" << endl;
        }
        if(n>=0 && n<=10){
            z++;
        }
    }while (n<0 || n>10);

        cin >> m;
        if(m>=0 && m<=10){
            z++;
        }  
        while (m<0 || m>10){
            cout << "nota invalida" << endl;
            cin >>m;
            if(m>=0 && m<=10){
            z++;
        }
    }       
    
    if(z == 2){
    c = (n+m)/2;
    cout <<fixed<<setprecision(2)<< "media = "<<c<<endl;
    n=0;
    m=0;
    z=0;
    c=0;
    do{
        cout <<"novo calculo (1-sim 2-nao)"<<endl;
        cin >> q;
        if (q == 2){
            break;
        }
    }   while(q<1 || q >2);
}
}

return 0;

}


        
    
