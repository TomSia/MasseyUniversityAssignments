#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("equipment.txt");  // open the file
    if (!file) {
        cout << "Can't open" << endl;
        return 1;
    }

    cout << "Items to be supplied to each hospital:" << endl;

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string hospital;
        string amountMask, amountGown;
        int masks, gowns;

        // split line by ';'
        getline(ss, hospital, ';');
        getline(ss, amountMask, ';');
        getline(ss, amountGown, ';');

        masks = stoi(amountMask);
        gowns = stoi(amountGown);

        if (masks == gowns) {
            cout << hospital << "   no items needed" << endl;
        } 
        else if (masks < gowns) {
            cout << hospital << "   " << (gowns - masks) << " masks" << endl;
        } 
        else {
            cout << hospital << "   " << (masks - gowns) << " gowns" << endl;
        }
    }

    file.close();
    return 0;
}
