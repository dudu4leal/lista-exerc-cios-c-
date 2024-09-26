#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    
    cout << setfill('-') << setw(39) << "" << endl;
    cout << '|' << setfill(' ') << setw(2) << "" << "decimal" << setfill(' ') << setw(2) << "" << '|' << setfill(' ') << setw(2) << "" << "octal" << setfill(' ') << setw(2) << "" << '|' << setfill(' ') << setw(2) << "" << "Hexadecimal" << setfill(' ') << setw(2) << "" << '|' << endl;
    cout << setfill('-') << setw(39) << "" << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "0" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "0" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "0" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "1" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "1" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "1" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "2" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "2" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "2" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "3" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "3" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "3" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "4" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "4" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "4" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "5" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "5" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "5" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "6" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "6" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "6" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "7" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(4) << "" << "7" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "7" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "8" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "10" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "8" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(6) << "" << "9" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "11" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "9" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "10" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "12" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "A" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "11" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "13" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "B" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "12" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "14" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "C" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "13" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "15" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "D" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "14" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "16" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "E" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << '|' << setfill(' ') << setw(5) << "" << "15" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(3) << "" << "17" << setfill(' ') << setw(4) << "" << '|' << setfill(' ') << setw(7) << "" << "F" << setfill(' ') << setw(7) << "" << '|' << endl;
    cout << setfill('-') << setw(39) << "" << endl;

    return 0;
}

