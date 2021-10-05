#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
int N;
float a,b;
float r;
    cin>>N; 
    for(int i=1;i<=N;i++){
        cin >> a >> b;
        if(b!=0){
            r=a/b;
           cout<<fixed<<setprecision(1)<< r << endl;
        }else{
            cout<< "divisao impossivel" << endl;
        }
    }
 
    return 0;
}