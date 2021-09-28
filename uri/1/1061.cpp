#include <iostream>

using namespace std;
 
int main() {
    int D,D1,Dt;
    int Tt1,H,M,S,H1,M1,S1,Tt2;
    int Y;
    string Z;
    
    cin >> Z >> D ;
    cin >> H >> Z >> M>> Z >> S;
    cin >> Z >> D1 ;
    cin >> H1 >> Z >> M1 >> Z >> S1;

    Tt1 = D*60*60*24 + H*60*60 + M*60 + S;
    Tt2 = D1*60*60*24 + H1*60*60 + M1*60 + S1;

    Dt = Tt2 - Tt1;

        cout << Dt/(60*60*24) << " dia(s)" << endl;
    Y= Dt%(60*60*24);
        cout << Y/(60*60) << " hora(s)" << endl; 
    Y= Y%(60*60);
        cout << Y/(60) << " minuto(s)" << endl;
    Y=Y%60;
        cout << Y << " segundo(s)" << endl;

    return 0;
}