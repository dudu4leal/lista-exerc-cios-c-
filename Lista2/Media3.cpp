#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout << fixed << setprecision(1) << "Media: " << media << endl;

    if (media>=7){
        cout << "Aluno aprovado." << endl;
    }else if(media<5){
        cout << "Aluno reprovado." << endl;
    } else if (media>=5 || media<7){
        cout << "Aluno em exame." << endl;
        double nE;
        cin >> nE;
        cout << "Nota do exame: " << nE << endl;

        double media2 = (nE+media)/2;
        
        if (media2>=5){
            cout << "Aluno aprovado." << endl << "Media final: " << media2 << endl;
        }else{
            cout << "Aluno reprovado." << endl << "Media final: " << media2 << endl;
        }

    }



    return 0;
}