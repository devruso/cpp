#include <iostream>
 
using namespace std;
 
int main() {
 
int n,c=1,i=1;
    cin >> n;
    while(i<=n){
        do{
            if(c%4 != 0){
                cout<<c<<" ";
                c+=1;
            }else if(c%4 == 0){
                cout << "PUM" <<endl;
                c+=1;
                i+=1;
            }
        }while (i<=n);
    }
 
    return 0;
}