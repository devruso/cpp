#include <iostream>
#include <cmath> 
using namespace std;
double A,B,C,X,Y;

int main() {
    cin >> A >> B >> C;

    if(B > A & B > C ){
        X = B;
        B = A;
        A = X;
        
        if(C > B){
            Y = C;
            C = B;
            C = Y;
        }
    }
    if (C > A & C > B){
        X = C;
        C = A;
        A = X;
        
        if(B > A){
            Y = B;
            C = B;
            C = Y;
        }
    }
   
    if (A >= B+C){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
    if (pow(A,2) < pow(B,2)+pow(C,2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    } else {
        if(pow(A,2)> pow(B,2)+pow(C,2)){
        cout << "TRIANGULO OBTUSANGULO"<<endl;
    }else if(pow(A,2) == pow(B,2)+pow(C,2)) { 
        cout << "TRIANGULO RETANGULO"<<endl;
        }
    }if(A == B & B == C){
        cout << "TRIANGULO EQUILATERO" << endl;}
        else if (A == B & B!= C| B == C & C!= A | A == C & C != B){
        cout << "TRIANGULO ISOSCELES" << endl;
    }   
} 

   return 0;
}