#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    long long fatorial = 1;

    if(n<0){
        cout << "nao existe fatorial de numero negativo" << endl;
    }else{
        
        for(int i=1; i<=n; i++){
            fatorial*=i;
        }
    }

        cout << fatorial << endl;
   
    return 0;
}