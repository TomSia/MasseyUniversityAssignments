#include <iostream>
using namespace std;
//Author: Tom Siackhasone
//Date Updated: 04/08/2025
//I have added an array to my program, because it is a much more efficient way to store the maximum amount of days
// and allows for easy access to the maximum days in each month by using the month as an index and having it under a variable.
// This program calculates a new date based on a given date and a difference in days.

int main() {
    float diff, newday;
    int day, month, year;
    cout << "Please enter a date in the format dd mm yyyy eg. 21 11 2002:";
    cin >> day >> month >> year;
    cout << "You entered the date: " << day << "/" << month << "/" << year << endl;
    cout << "Enter a difference of -7 to 7 days:";
    cin >> diff;
    //an array that makes sure there are max days for each month limiting to 12 months.
    float maxmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    newday = day + diff;
    if (year % 4 == 0) {
        //checks to see if leap year if it is feb is 29 days else 28 days.
        maxmonth[1] = 29;
    } if (year % 100 == 0 && year % 400 != 0) {
        //if it is a century year and not divisible by 400, it is not a leap year.
        maxmonth[1] = 28;
    }

    if (newday > maxmonth[month - 1]) {
        //if newday is bigger than max days in the month array
        //+1 to month and makes sure newday is minused by previous months days.
        newday -= maxmonth[month - 1];
        month++;
    } if (newday < 1) {
        //if newday is less than 1, it changes to previous month and changes month -1.
        newday += maxmonth[month - 2];
        month--;
    } if (month > 12) {
        //adds a year, if month is greater than 12 (december) and sets month to jan
        //and changes month to january while making sure newday is minused by days in dec
        month = 1;
        year++;
    } if (month < 1) {
        //minuses a year if month is less than 1 (january) and sets month to december.
        month = 12;
        newday += maxmonth[0];
        year--;
    }
    //Outputs the new date
    cout << "The new date is: " << newday << "/" << month << "/" << year << endl;

}