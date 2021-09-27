#include <iostream>
#include <iomanip> 
using namespace std;
 

int main() {
    double N,T;
    cin >> N;
    if(N<=2000){
        cout << "Isento"<<endl;
    }else if(N<=3000){
        T = N * 0.08;
        cout <<fixed<<setprecision(2)<<"RS "<< T <<endl;
    }else if(N<=4500){
        T = N * 0.18;
        cout <<fixed<<setprecision(2)<<"RS "<< T <<endl;
    }else{
        T =  N * 0.28;
        cout <<fixed<<setprecision(2)<<"RS "<< T <<endl;

    }
 
    return 0;
}