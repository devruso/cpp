#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
    float N,Md;
    int pos=0;
    for(int i=1;i<=6;i++){
        cin>>N;
            if(N>0){
            pos+=1;
            Md+=N;
        }
    }
    Md = Md/pos;
    cout << pos <<" valores positivos" << endl;
    cout <<fixed<<setprecision(1)<< Md << endl;
    
 
    return 0;
}