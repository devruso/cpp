#include <iostream>
 
using namespace std;
 
int main() {
    float N;
    int pos=0;
    for(int i=0;i<6;i++){
        cin>>N;
        if(N>0){
            pos+=1;
        }
    }
    cout << pos <<" valores positivos" << endl;
    
 
    return 0;
}