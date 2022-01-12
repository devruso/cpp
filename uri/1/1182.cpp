#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    int N;
    float M[12][12],c0=0;
    char X;
    
    cin >> N;
    cin >> X;

    for(int i = 0; i<12;i++){
        for(int j=0; j<12;j++){
            cin >> M[i][j];
            if(j == N){
                c0+=M[i][j];
            }
        }
    }
    if(X == 'M'){
        cout <<fixed<<setprecision(1)<< c0/12<<endl;
        }else{
         cout<<fixed<<setprecision(1)<<c0<<endl;
        }

    return 0;
}