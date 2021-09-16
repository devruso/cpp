#include <iostream>
 
using namespace std;
 int N;
int main() {
    
    cin >> N;

float nota100,nota50,nota20,nota10,nota5,nota2,nota1;

nota100 = (N/100);
nota50 = N%50;
    
   cout << fixed << nota100 << endl;
   cout << fixed << nota50 << endl;
    return 0;
}