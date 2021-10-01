#include <iostream>
 
using namespace std;
 
int main() {
    int N,maior,j;
    maior = 0;
    j=0;
    for (int i=1; i<=100; i++){
        cin >> N;
        if(N>maior){
            maior = N;
            j=i;
        }
    }
    cout << maior <<endl;
    cout << j << endl;
 
    return 0;
}