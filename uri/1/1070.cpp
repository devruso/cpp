#include <iostream>
 
using namespace std;
 
int main() {
    int N,y;
    y=0;
    cin >> N;

          if(N%2 != 0){
             while(y<=5){
                 cout << N <<endl; 
                 N+=2;
                 y++;
                }                    
            }else{
                N++;
                y=0;
               while(y<=5){
                 cout << N <<endl; 
                 N+=2;
                 y++;
              }
                
            }

        return 0;
    }
            
        
    
    
