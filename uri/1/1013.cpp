#include <iostream>
#include <cmath>

using namespace std;
int A,B,C; 
int main() {
    
    cin >> A>>B>>C;

int MaiorAB,MaiorBC, Maior;
        MaiorAB = (A+B + abs(A-B))/2;
        MaiorBC = (B+C + abs(B-C))/2;
        
        Maior = (MaiorAB+MaiorBC + abs(MaiorAB - MaiorBC))/2;

    cout << Maior <<" eh o maior"<<endl;
    
    return 0;
}