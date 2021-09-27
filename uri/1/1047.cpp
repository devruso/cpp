#include <iostream>
#include <cmath> 
using namespace std;
int Ih,Im,Fh,Fm,Jg,H,M; 
int main() {
   
    cin >> Ih >> Im >> Fh >> Fm;

    Jg = (Fh*60+Fm) - (Ih*60+Im);
    
    if (Jg <= 0) {
        Jg = Jg + (24*60);

        cout << "O JOGO DUROU "<< Jg/60 << " HORA(S) E "<< Jg%60  << " MINUTO(S)"<< endl;    
    }else{
        cout << "O JOGO DUROU "<< Jg/60 << " HORA(S) E "<< Jg%60  << " MINUTO(S)"<< endl;    
    }    

    return 0;
    }

    
