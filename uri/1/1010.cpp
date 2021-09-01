#include <iostream>
#include <iomanip>
using namespace std;
int prod1, unit1, prod2,unit2;
float price,price2,total;

int main(){
    cin >> prod1 >> unit1 >> price;
    cin >> prod2 >> unit2 >> price2;
    
    total = (unit1*price)+(unit2*price2);
    
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<< total<<endl;

return 0;
}

