#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int cod, quant;
    cin >> cod >> quant;
    double val=0.0;

    if (cod==1){
        val=4.00;
    }else if (cod==2){
        val=4.50;
    }else if (cod==3){
        val=5.00;
    }else if (cod==4){
        val=2.00;
    }else if(cod==5){
        val=1.50;
    }else{
        cout << "Codigo invalido" << endl;
        return 0;
    }

    double total = val*quant;

    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;

    return 0;
}