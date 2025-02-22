/*9. Write a C++ program to count the number of days between two given dates.
Date Format -> YYYY-MM-DD
Days between 2022/01/31 to 2022/01/01 = 30
Days between 2000/01/31 to 2019/02/01 = 6938
Days between 1980/05/31 to 1995/12/12 = 5677*/

#include <iostream>
#include <ctime>
using namespace std;

class DateDifference {
private:
    struct tm date1, date2;

public:
    DateDifference(int y1, int m1, int d1, int y2, int m2, int d2) {
        date1 = {0, 0, 0, d1, m1 - 1, y1 - 1900};
        date2 = {0, 0, 0, d2, m2 - 1, y2 - 1900};
    }

    int computeDays() {
        time_t time1 = mktime(&date1);
        time_t time2 = mktime(&date2);
        return abs(difftime(time1, time2) / (60 * 60 * 24));
    }

    void display() {
        cout << "Days between given dates: " << computeDays() << endl;
    }
};

int main() {
    int y1, m1, d1, y2, m2, d2;
    cout << "Enter first date (YYYY MM DD): ";
    cin >> y1 >> m1 >> d1;
    cout << "Enter second date (YYYY MM DD): ";
    cin >> y2 >> m2 >> d2;

    DateDifference obj(y1, m1, d1, y2, m2, d2);
    obj.display();

    return 0;
}
