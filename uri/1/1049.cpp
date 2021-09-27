#include <iostream>
 
using namespace std;
string A,B,C; 
int main() {
    cin >> A;
    cin >> B;
    cin >> C;
    if(A == "vertebrado"){
        if (B == "ave"){
            if(C== "carnivoro"){
                cout << "aguia"<< endl;
            }else{
                cout << "pomba"<< endl;
            }
            }else{
                if(C == "onivoro"){
                    cout << "homem"<< endl;
                }else{
                    cout << "vaca"<< endl;
                }
        }
    }else{
        if(B == "inseto"){
            if(C == "hematofago"){
                cout << "pulga"<< endl;
            }else{
                cout << "lagarta"<< endl;
            }
        }else{
            if(C=="hematofago"){
                cout << "sanguessuga"<< endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    
 
    return 0;
}