#include <iostream>
 
using namespace std;
 int a,b,a1=0,b1=0,c,x=0,x1,z;

int main() {
    
    while (x != 2){
        do{
          cin >> a >> b;
            if(a>b){
                a1+=1;
            }else if(b>a){
                b1+=1;
            }else if(b == a){
                c+=1;
            }
        } while(a < 0 | b < 0);
        x+=2;
        if(x == 2){
            x1+=1;
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> z;
            if(z== 1){
                a = 0;
                b = 0;
                x = 0;
            }else if(z == 2){
                cout << x1 << " grenais" << endl;
                cout << "Inter:"<<a1<<endl;
                cout << "Gremio:"<<b1<<endl;
                cout << "Empates:"<<c<<endl;
                if(a>b){
                    cout<<"Inter venceu mais"<<endl;
                }else if(b>a){
                    cout<<"Gremio venceu mais"<<endl;
                    }else{
                        cout<<"Não houve vencedor"<<endl;
                    }
            }
        }
    }
 
    return 0;
}