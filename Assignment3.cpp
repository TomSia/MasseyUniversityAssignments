#include <iostream>
using namespace std;
//Name: Tom Siackhasone
//ID: 25021767
    
void problemCheck(float yo) {
    cout << yo;
}

int main () {

    float volts[100], sum;

    cout << "Enter 6 voltages:";
    for (int i = 0; i < 6; i++) {
        cin >> volts[i];
        cout << volts[i] << " , ";
        sum += volts[i];
        problemCheck(volts[i]);
    }

    float average = sum/6;
    float tenper = average * 0.10;
    float fiftenper = average * 0.15;
    cout << "\nThe average is " << average << " volts.\n"; 
    cout << "10% = " << tenper << " volts.\n";
    cout << "15% = " << fiftenper << " volts.";

    
}