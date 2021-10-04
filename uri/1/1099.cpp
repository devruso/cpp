#include <iostream>
#include <cmath> 

using namespace std;
 
int main() {
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        int a,b,sum,x;
        sum=0;
        cin >> a >> b;

        if(a<b){
            x=b;
            b=a;
            a=x;
        }
        for(int j=b+1; j<a;j++){
            
            if(j%2 != 0){
                sum+=j;
                
            }else{
                sum+=0;
                
            }
        
        }
        cout << sum << endl;
        
    }
    
 
    return 0;
}