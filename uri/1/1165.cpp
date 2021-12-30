#include <iostream>
 
using namespace std;
 
int main() {
 
int N, C, x=1,c=0,k=0;  

    cin >> N;
    while(c<N){

        cin >> C;
        x = 1;   
        while(x<=C){
            if(C%x == 0){
                k++;
                    
            } 
        x++;
        }
        if(k == 2){
            cout << C << " eh primo" << endl;
        }else{
            cout << C << " nao eh primo" << endl;
        }

        k = 0; 

        c++;
    }
    return 0;
}