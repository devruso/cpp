#include <iostream>
 
using namespace std;
 
int main() {

int A,B,N=0,c=0,x=0;
double a,b;
cin >> N;
    while(c<N){
        cin >> A >> B >> a >> b;
        while(A<=B){
            if(x>100){
                break;
            }
            A+= A*a/100;
            B+= B*b/100;
            x++;
        }
        
        if(x>100){
            cout << "Mais de 1 seculo." << endl;
        }else{
            cout << x << " anos." << endl;
        }
    x=0;    
    c++;
    }
    

 
    return 0;
}