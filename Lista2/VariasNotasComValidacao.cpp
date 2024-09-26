#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int opcao = 1;
    
do{
    double a,b,media;

    do{
        cin >> a;
        if(a<0 || a>10){
            cout << "nota invalida" << endl;
        }
    } while (a<0 || a>10);

    do{
        cin >> b;
        if(b<0 || b>10){
            cout << "nota invalida" << endl;
        }
    } while (b<0 || b>10);

    media = (a+b)/2;
    cout << fixed << setprecision(2) << "media = " << media << endl;


    do{
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> opcao;
    }while (opcao !=1 && opcao!=2);


    } while (opcao==1);

    return 0;
}