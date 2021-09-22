#include <iostream>

using namespace std;


int N,Z,M;
float Y;
int nota100,nota50,nota20,nota10,nota5,nota2,nota1;
int moeda10, moeda50, moeda25, moeda01, moeda001, moeda05;
int main() {

    double quantidade;
    cin >> quantidade;

    int total = quantidade * 100;
    N = total/100;
    M = total%100;

// NOTAS
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
   
// MOEDAS
moeda10 = N; 
moeda50 = M/ 50;
Y = M%50;
M = Y;
moeda25 = M/25;
Y = M%25;
M = Y;
moeda01 = M/10;
Y = M%10;
M = Y;
moeda05 = M/5;
Y = M%5;
M = Y;
moeda001 = M;



cout << fixed << "NOTAS:" << endl;
cout << fixed << nota100 << " nota(s) de R$ 100.00" << endl;
cout << fixed << nota50 << " nota(s) de R$ 50.00"  << endl;
cout << fixed << nota20 << " nota(s) de R$ 20.00" <<endl;
cout << fixed << nota10 << " nota(s) de R$ 10.00" << endl;
cout << fixed << nota5 << " nota(s) de R$ 5.00" <<endl;
cout << fixed << nota2 << " nota(s) de R$ 2.00" << endl;
cout << fixed <<"MOEDAS:" << endl;
cout << fixed << moeda10 <<" moeda(s) de R$ 1.00" << endl;
cout << fixed << moeda50 << " moeda(s) de R$ 0.50" << endl;
cout << fixed << moeda25 << " moeda(s) de R$ 0.25" << endl;
cout << fixed << moeda01 << " moeda(s) de R$ 0.10" << endl;
cout << fixed << moeda05 << " moeda(s) de R$ 0.05" << endl;
cout << fixed << moeda001 << " moeda(s) de R$ 0.01" << endl;



    return 0;
}