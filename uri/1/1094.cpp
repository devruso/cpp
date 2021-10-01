#include <iostream>
#include <iomanip> 

using namespace std;
 
int main() {
    int N,R=0,C=0,S=0;
    double R1,C1,S1,total;
    total=0;
    cin >> N;
     for (int i=1;i<=N ; i++){
        
        string Z;
        int A;
       
        cin >> A >> Z;
        if(Z == "C"){
            C+=A;
        }else if(Z =="S"){
            S+=A;
        }else if(Z == "R"){
            R+=A;
        }

        total+=A;
    }
    C1 = (C*100)/total;
    R1 = (R*100)/total;
    S1 = (S*100)/total; 

    cout <<"Total: "<< total << " cobaias"<< endl;
    cout << "Total de coelhos: " << C <<endl;
    cout <<  "Total de ratos: " <<R << endl;
    cout <<  "Total de sapos: "<< S << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << C1<< " %"<<endl;
    cout << "Percentual de ratos: "<<fixed << setprecision(2) << R1<< " %"<<endl;
    cout << "Percentual de sapos: "<<fixed << setprecision(2) << S1<< " %"<<endl;
    return 0;
}
