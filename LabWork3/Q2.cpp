/*2. Write a C++ program to implement a class called Date that has private member
variables for day, month, and year. Include member functions to set and get these
variables, as well as to validate if the date is valid. */
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) {
        if (isValid(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date! Setting default date (1/1/2000)." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    bool isValid(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1) return false;
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
            daysInMonth[2] = 29;

        return d <= daysInMonth[m];
    }

    void setDate(int d, int m, int y) {
        if (isValid(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date! Keeping the previous date." << endl;
        }
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int d, m, y;
    cout << "Enter day, month, and year: ";
    cin >> d >> m >> y;

    Date date(d, m, y);
    date.getDate();

    return 0;
}