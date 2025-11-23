#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Name: Tom Siackhasone
//ID: 25021767
//Last Updated: 08/10/2025

void ruler() {
    for (int i = 1; i <= 40; i++) {
        cout << (i % 10);
    }
    cout << endl;
}
int main() {
    string text, temp;
    int n, w, spaces;
    w = 0;
    n = 0;
    spaces = 0;
    cout << "Enter a line of text: ";
    getline(cin, text);
    if (text.length() > 40) {
        cout << "Text is too large! Maximum is 40 characters." << endl;
        return 0;
    } else {
        while (n < text.length()) {
        if (text[n] != ' ') {
            w++;
        }   else {
            w++;
            spaces++;
        }
        n++;
    }
    }
    int remaining = 40 - w;
    int extra = remaining/spaces;
    int leftover = remaining % spaces;
    //Just a check before calculating.
    if (spaces == 0) {
    cout << text << endl;
    ruler();
    return 0;
    }
    //All my testing outputs to confirm what went wrong and right while testing my program lol.
    /*cout << "text length is " << w << endl;
    cout << "there are " << spaces << " spaces" << endl;
    cout << "remaining text " << 40 - w << endl;
    cout << "there wil be " << (40 - w)%spaces << " per space." << endl;
    cout << "and " << (40 - w)/spaces << " extra" << endl;
    */
    int spacecheck = 0;
    n = 0;
    while (n < text.length()) {
        if (text[n] != ' ') {
            temp = temp + text[n];
        }   else {
            temp = temp + text[n];
            for (int i = 0; i < extra; i++) {
                temp = temp + " ";
            }
            if (spacecheck < leftover) {
                temp = temp + " ";
            }
            spacecheck++;
        }
    n++;
    }
    //turns my temp into a string cos of marking schedule
    cout << temp << endl;
    //THE RULER!!!
    ruler();
    return 0;
}