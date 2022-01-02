#include <iostream>
 
using namespace std;
 
int main() {
 
int N[20],x,c,Z[20];

    for(int i =0;i<=19;i++){
        
        cin >> x;
        N[i]=x; 
    }
    c = 19;
    for(int j =0; j<=9;j++){
        Z[j] = N[c];
        Z[c] = N[j];
        c--;   
    }
    int k = 0;
    while(k<=19){
        cout <<"N["<<k << "] = "<< Z[k] << endl;
        k++;
    } 

    return 0;
}