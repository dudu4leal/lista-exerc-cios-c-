#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    double raio;
    cin >> raio;

    double n = 3.14159;

    double area = n * pow(raio, 2);

    cout << fixed << setprecision(4) << "A=" << area << endl;

    return 0;
}

