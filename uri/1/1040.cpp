#include <iostream>
#include <iomanip> 
using namespace std;
float N1,N2,N3,N4,N5,Md,Ne,MdF;
int main() {
 
    cin >> N1 >> N2 >> N3 >> N4;
    Md = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    
    cout << fixed <<setprecision(1)<< "Media: " << Md << endl;

    if( Md >= 7){
        cout << "Aluno aprovado." << endl;
    } else if (Md < 5){
        cout << "Aluno reprovado." << endl;
    } else if (Md >= 5 && Md < 7 ){
        cout << "Aluno em exame." << endl;
        cin >> Ne;
        cout << "Nota do exame: " << Ne << endl;
        if ((Md + Ne)/2 > 5 ){
            cout <<"Aluno aprovado." << endl;
            cout <<"Media final: " << (Md+Ne)/2 << endl;
        } else{
            cout <<"Aluno reprovado." << endl;
            cout <<"Media final: " << (Md+Ne)/2 << endl;
        }
    }

    
    return 0;
}