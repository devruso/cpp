#include <iostream>
 
using namespace std;
 
int main() {
    int N,P,I,Neg,Pos;
    P =0;I=0;Neg=0;Pos=0;
    for(int i=1;i<=5;i++){
        cin >> N;
            
        if(N%2 == 0){
            P+=1;
        }else{
            I+=1;
        }       
        if(N > 0){
            Pos+=1;
        }else if (N<0){
            Neg+=1;
        }

    }
    cout << P << " valor(es) par(es)" << endl;
    cout << I << " valor(es) impar(es)" << endl;
    cout << Pos << " valor(es) positivo(s)" << endl;
    cout << Neg << " valor(es) negativo(s)" << endl;

            
 
    return 0;
}