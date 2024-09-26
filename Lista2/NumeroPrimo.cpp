#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int v, n;
    cin >> v;
    

    for (int i=0; i<v; i++){
        bool ehPrimo = true;
        cin >> n;

        if (n<=1){
            ehPrimo = false;
        }else{
            for(int j=2; j<n; j++){
                if(n%j==0){
                    ehPrimo=false;
                }
            }
        }
       if(ehPrimo){
        cout << n << " eh primo" << endl;
       }else{
        cout << n << " nao eh primo" << endl;
       }
    }

     return 0;
}