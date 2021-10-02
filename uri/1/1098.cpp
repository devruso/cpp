#include <iostream>
 
using namespace std;
 
int main() {
 
    
    int a,b;
        
      
       for(float i=0.0;i<=2.1;i+=0.2){
           
           for(float j=1.0;j<=3.0;j++){
               if(i>0 & i<1 | i>1 & i<2){
                   cout << "I="<<i<<" J="<<j+i<<endl;
               }else{
                   a=i;
                   b=a+j;
                   cout << "I="<<a<<" J="<<b<<endl;
               }
            
               
               

           }
       }

    
    return 0;
}