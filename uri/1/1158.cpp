#include <iostream>
 
using namespace std;
 
int main() {

int N,y,x,c=0,s=0,k=0;

cin >> N;
while(c<N){
    cin >> x >> y;
    k=0;
    s=0;
    while(s<y){
        if(x%2 !=0){
        k += x; 
        s++;   
          
    }
    x++;  
}
    cout << k << endl;
    c++;

}
 
    return 0;
}