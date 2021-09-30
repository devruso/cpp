#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
    int X,Y,OD,N,OP,EN;
    
    cin >> X;

            for(int i=1;i<=X;i++){
                cin >> Y;

                if(Y%2 == 0 & Y>0){ 
                    cout<<"EVEN POSITIVE" << endl;
                }else if(Y%2 == 0 & Y<0){
                    cout<<"EVEN NEGATIVE" << endl;
                }else if(Y%2 != 0 & Y>0){
                        cout<<"ODD POSITIVE" << endl;
                    }else if (Y%2 != & Y<0){
                        cout<<"ODD NEGATIVE" << endl;
                    }else{
                        cout<<"NULL" << endl;
                    }
                     
            }      
        return 0;
    }