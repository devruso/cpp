#include <iostream>
 
using namespace std;
 
int main() {
int N; 
    
    while(N!=2002){
        cin >> N;
        if(N != 2002){
            cout << "Senha invalida"<<endl;
        }else{
            cout << "Acesso Permitido"<<endl;
                break;
        }
    }
 
    return 0;
}