#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
   double a = 234.345;
   double b = 45.698;

    cout << fixed << setprecision(6) << a << " - " << b << endl;
    cout << fixed << setprecision(0) << a << " - " << b << endl;
    cout << fixed << setprecision(1) << a << " - " << b << endl;
    cout << fixed << setprecision(2) << a << " - " << b << endl;
    cout << fixed << setprecision(3) << a << " - " << b << endl;
    cout << scientific << nouppercase << setprecision(6) << a << " - " << b << endl;
    cout << scientific << uppercase << setprecision(6) << a << " - " << b << endl;
    cout << defaultfloat << a << " - " << b << endl;
    cout << defaultfloat << a << " - " << b << endl;


    return 0;
}

