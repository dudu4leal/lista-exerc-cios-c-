#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    int a,b,c;
    cin >> a >> b >> c;

    if (a>b){
        if(a>c){
            if(b>c){
                cout << a << endl << b << endl << c << endl;
            }else if(c>b){
                cout << a << endl << c << endl << b << endl;
            }
        }else if(c>a){
            cout << c << endl << a << endl << b << endl;
        }
    }else if(b>a){
        if(b>c){
            if(c>a){
                cout << b << endl << c << endl << a << endl; 
            }else if(c<a){
                cout << b << endl << a << endl << c << endl;
            }
        }else if(b<c){
            cout << c << endl << b << endl << a << endl;
        }
    }
    
    cout << endl << a << endl << b << endl << c << endl;
    
    

    return 0;
}

