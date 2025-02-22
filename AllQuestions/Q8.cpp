/*8. Write a C++ program to compute the number of days in a month for a given year and
month.
Input Year: 2019
Input Month: 04
Number of days of the year 2019 and month 4 is: 30*/

#include <iostream>
using namespace std;

class DaysInMonth {
private:
    int year, month;

public:
    DaysInMonth(int y, int m) {
        year = y;
        month = m;
    }

    int getDays() {
        if (month == 2) {
            return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        }
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return days[month];
    }

    void display() {
        cout << "Number of days in year " << year << " and month " << month << " is: " << getDays() << endl;
    }
};

int main() {
    int y, m;
    cout << "Enter year and month: ";
    cin >> y >> m;

    DaysInMonth obj(y, m);
    obj.display();

    return 0;
}