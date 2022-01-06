#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin >> N;

    int X[N],menor1=1001,k=0;

    for(int i = 0; i<N;i++){
        int Q;
        cin >> Q;
        X[i] = Q;
        if(Q < menor1){
            menor1 = Q;
            k=i;
        } 
    }
    cout << "Menor valor: "<<menor1<<endl<<"Posicao: "<< k << endl;

    return 0;
}