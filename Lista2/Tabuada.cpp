#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int n, p;
    cin >> n;

    for(int i=1; i<=10; i++){
         p = n*i;
         cout << i << " x " << n << " = " << p << endl;
    }

    return 0;
}