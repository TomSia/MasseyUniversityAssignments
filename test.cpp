#include <iostream>
using namespace std;
#include <iomanip>

int main () {
    int judges;
    cout << "Enter number of judges 4 - 8: ";
    cin >> judges;
    for (int i = 0; 2 > i; i++) {
        if (judges < 4 || judges > 8) {
            cout << "Invalid. Enter number of judges again (4 to 8): ";
            cin >> judges;
            i--;
    }   else {
        break;
    }
    }
}