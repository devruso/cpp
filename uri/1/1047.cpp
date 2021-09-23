#include <iostream>
#include <cmath> 
using namespace std;
int Ih,Im,Fh,Fm,Jg,H,M; 
int main() {
   
    cin >> Ih >> Im >> Fh >> Fm;

    if (Ih - Fh >= 0) {
        if (Im - Fm == 0){
            cout << "O JOGO DUROU 24 HORA(S)"<< " E 0 MINUTO(S)" << endl;
        }
        if (Im >= Fm){          
        M  = abs(Im-Fm-60);  
        }
        H  = abs(Ih - Fh - 24);
            cout << "O JOGO DUROU " << H <<  " HORA(S) E "<< M  << " MINUTO(S)" << endl;
        }
    if( Ih - Fh < 0){
        H = abs(Fh - Ih) ;
        if(Im < Fm){
            M = Fm - Im;
            cout << "O JOGO DUROU "<< H << " HORA(S) E "<< M  << " MINUTO(S)"<< endl;
        }else if(Im > Fm){
            M = abs(Im-Fm-60);
            cout << "O JOGO DUROU "<< H << " HORA(S) E "<< M  << " MINUTO(S)"<< endl;
        }
    }

    return 0;
}