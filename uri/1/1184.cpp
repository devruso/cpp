#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    int N;
    float M[12][12],c0=0,c1=0,k=0;
    char X;
    cin >> X;
 
    for(int i = 0; i<12;i++){
        for(int j = 0; j<12;j++){
            cin>>M[i][j];
            if(j<c1){
                c0+=M[i][j];
                k++;
            }
        }
        c1++;
    }
    if(X == 'M'){
        cout <<fixed<<setprecision(1)<< c0/k << endl;
    }else{
        cout <<fixed<<setprecision(1)<< c0 << endl;

    }
    return 0;
}