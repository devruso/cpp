#include <iostream>
 
using namespace std;
 
int main() {
 
int n,a=0,b=0,c=0;

    while(n != 4){
        do{
            cin >> n;
            if(n==1){
                a+=1;
            }else if(n==2){
                b+=1;
            }else if(n==3){
                c+=1;
            }else if(n==4){
                break;
            }
        } while(n!=4);
    }    
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: "<<a<<endl;
    cout << "Gasolina: "<<b<<endl;
    cout << "Diesel: "<<c<<endl;
    return 0;
}