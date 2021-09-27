#include <iostream>
#include <iomanip>

double N;
double Aj = 0;
double P = 0;
using namespace std;
 
int main() {

    cin >> N ;

    if (N<=400){
        P = 15;
        Aj = N*(P/100);
        N = N + Aj;
        cout <<fixed<<setprecision(2)<< "Novo salario: " << N << endl;
        cout <<fixed<<setprecision(2)<< "Reajuste ganho: "<< Aj << endl;
        cout <<fixed<<setprecision(0)<< "Em percentual: " << P<<" %"<< endl;
    }else if(N<= 800){
     P = 12;
        Aj = N*(P/100);
        N = N + Aj;
        cout <<fixed<<setprecision(2)<< "Novo salario: " << N << endl;
        cout <<fixed<<setprecision(2)<< "Reajuste ganho: "<< Aj << endl;
        cout <<fixed<<setprecision(0)<< "Em percentual: " << P<<" %"<< endl;   
    }else if(N<=1200){
        P = 10;
        Aj = N*(P/100);
        N = N + Aj;
        cout <<fixed<<setprecision(2)<< "Novo salario: " << N << endl;
        cout <<fixed<<setprecision(2)<< "Reajuste ganho: "<< Aj << endl;
        cout <<fixed<<setprecision(0)<< "Em percentual: " << P<<" %"<< endl;
    }else if( N <= 2000){
        P = 7;
        Aj = N*(P/100);
        N = N + Aj;
        cout <<fixed<<setprecision(2)<< "Novo salario: " << N << endl;
        cout <<fixed<<setprecision(2)<< "Reajuste ganho: "<< Aj << endl;
        cout <<fixed<<setprecision(0)<< "Em percentual: " << P<<" %"<< endl;
    }else{
        P = 4;
        Aj = N*(P/100);
        N = N + Aj;
        cout <<fixed<<setprecision(2)<< "Novo salario: " << N << endl;
        cout <<fixed<<setprecision(2)<< "Reajuste ganho: "<< Aj << endl;
        cout <<fixed<<setprecision(0)<< "Em percentual: " << P<<" %"<< endl;
    }
    
 
    return 0;
}