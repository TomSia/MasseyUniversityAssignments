#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Name: Tom Siackhasone
//ID: 25021767
//Date Modified: 24/09/2025

//I am using cmath to access standard just to make sure the program doesnt mess up any calculations/numbers.

//function to show the difference between volts.    
float diffCalc(float prev, float curr) {
    return std::abs(curr - prev);
}

//function to find the outlier voltage.
float averageCheck(float voltdiff, float average) {
    return std::abs(voltdiff - average);
}

//function if volt difference is greater than 15%.
int problemCheck(float voltdiff, float fiftenper) {
    if (voltdiff > fiftenper) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    //everything globally defined and initialised.
    int i, d, e, n;
    float volts[6], sum, prev, voltsdiff[5];
    sum = 0.0;
    n = 0;

    //Asking for 6 voltages and indexing them in.
    cout << "Enter 6 voltages: ";
    for (i = 0; i < 6; i++) {
    cin >> volts[i];
    sum += volts[i];
    }

    //indexing difference between voltages in voltsdiff.
    for (i = 0; i < 5; i++) {
        voltsdiff[i] = diffCalc(volts[i], volts[i+1]);
    }

    float average = sum/6;
    float tenper = average * 0.10;
    float fiftenper = average * 0.15;
    cout << "\nThe average is " << fixed << setprecision(1) << average << " volts.\n"; 
    cout << "10% = " << fixed << setprecision(1) << tenper << " volts." << endl;
    cout << "15% = " << fixed << setprecision(1) << fiftenper << " volts." << endl;
    //for loop to check for the type 1 problems.
    for (d = 0; d < 6; d++) {
        float avgCheck = averageCheck(volts[d], average);
        if (avgCheck > tenper) {
            n++;
            if (n == 1) {
                cout << "The following problems have occurred:" << endl;
            }
            cout << n <<". Voltage at hour " << d + 1 
            << " was "  << fixed << setprecision(1) << volts[d] 
            << " volts (difference of " << fixed << setprecision(1)
            << avgCheck << " volts)." << endl;
        }
    }
    //for loop to check for the type 2 problems.
    for (e = 0; e < 5; e++) {
        int check = problemCheck(voltsdiff[e], fiftenper);
        if (check == 1) {
            n++;
            if (n == 1) {
                cout << "The following problems have occurred:" << endl;
            }
            cout << n << ". Voltage change from hour " << e + 1 
            << " to hour " << e + 2 
            << " was " << fixed << setprecision(1) << voltsdiff[e] << " volts." << endl;
        } 
    }
    //if statement to print no problems encountered.
    if (n == 0) {
        cout << "No problems were encountered." << endl;
    }
    return 0;
}