#include <iostream>
 
using namespace std;
 
int main() {
 
    int I=1,J=7,X;
        X=0;
      
        
        while(I<=9){

            cout <<"I="<<I<<" J="<<J<<endl;
            X=J-1;
            cout <<"I="<<I<<" J="<<X<<endl;
            J=X-1;
            cout <<"I="<<I<<" J="<<J<<endl; 
                
                if(J<=13){
                    J+=4;
                    I+=2;
                }
        }
        
    
    return 0;
}