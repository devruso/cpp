#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
int A[100];
float x;   
 
 for (int i = 0; i<100; i++){

     cin >> x;
     A[i] = x;
     if(A[i] <=10){
         cout <<fixed<<setprecision(1)<< "A["<<i<<"] = "<<x<<endl;
     }


 }
    return 0;
}