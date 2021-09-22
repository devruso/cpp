#include <iostream>
 
using namespace std;
 int N,M;
 int Z;
 int nota100,nota50,nota20,nota10,nota5,nota2,nota1;

int main() {
    cin >> N;
        
M = N;
nota100 = N/100;
Z = N%100;
N = Z;
nota50 = Z/50;
Z = N%50;
N = Z;
nota20 = Z/20;
Z = N%20;
N = Z;
nota10 = Z/10;
Z = N%10;
N = Z;
nota5 =  Z/5;
Z = N % 5;
N = Z;
nota2 =  Z/2;
Z = N % 2;
N = Z;
nota1 = Z;    

cout << fixed << M << endl;
cout << fixed << nota100 << " nota(s) de R$ 100,00" << endl;
cout << fixed << nota50 << " nota(s) de R$ 50,00"  << endl;
cout << fixed << nota20 << " nota(s) de R$ 20,00" <<endl;
cout << fixed << nota10 << " nota(s) de R$ 10,00" << endl;
cout << fixed << nota5 << " nota(s) de R$ 5,00" <<endl;
cout << fixed << nota2 << " nota(s) de R$ 2,00" << endl;
cout << fixed << nota1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}