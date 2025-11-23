#include <iostream>
#include <iomanip>
using namespace std;


int main () {
    double pprice, wellArray[100], auckArray[100], wellSum, auckSum;
    int aCount, wCount, region;
    wCount = 0;
    aCount = 0;
    wellSum = 0;
    auckSum = 0;
    cout << "Enter code and petrol price for each region." << endl;
    cout << "Wellington code is 4, Auckland code is 9, enter -1 to stop." << endl;
    while (true) {
        cin >> region;
        if (region == -1) {
            break;
        }
        cin >> pprice;
        if (region == 4) {
            wellArray[wCount] = pprice;
            wellSum += wellArray[wCount];
            wCount++;
        } else if (region == 9) {
            auckArray[aCount] = pprice;
            auckSum += auckArray[aCount];
            aCount++;

        }
    }
    if (aCount == 0) {
        cout << "No prices entered for Auckland." << endl;
    } else {
        cout << "Auckland average petrol price is $" << fixed << setprecision(2) << auckSum/aCount << endl;
    }
    if (wCount == 0) {
        cout << "No prices entered for Wellington."<< endl;
    } else {
        cout << "Wellington average petrol price is $" << fixed << setprecision(2) << wellSum/wCount << endl;
    }  
    return 0;
}