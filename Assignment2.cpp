#include <iostream>
using namespace std;
#include <iomanip>
//Name: Tom Siackhasone
//ID: 25021767
//Last Updated: 19/08/2025

int main () {
    int judges = 0;
    float mark[100], biggest, smallest, sum, finalmark;
    smallest = 10;
    biggest = 0;
    sum = 0;
    cout << "Enter number of judges 4 - 8: ";
    cin >> judges;
    while (judges < 4 || judges > 8) {
        cout << "Invalid. Enter number of judges again (4 to 8): ";
        cin >> judges;
    }
    for (int i = 0; judges > i; i++) {
        cout << "Enter mark for Judge " << i + 1 << ": ";
        cin >> mark[i];
        while (mark[i] < 0 || mark[i] > 10) {
            cout << "Invalid. Enter mark again (0.0 to 10.0): ";
            cin >> mark[i];
        }
        if (mark[i] > biggest) {
            biggest = mark[i];
        } if (mark[i] < smallest) {
            smallest = mark[i];
        } 
    }
    for (int n = 0; judges > n; n++) {
        sum += mark[n];
    }
    finalmark = (sum - biggest - smallest)/(judges - 2);
    cout << "Final mark: " << setprecision(2) << fixed << finalmark << endl;
}