//https://edu.bitejiuyeke.com/homeworked/updateHomework?homeworkTitle=2021-04-05_%E7%B1%BB%E5%92%8C%E5%AF%B9%E8%B1%A1%28%E4%B8%8B%29_%E4%BD%9C%E4%B8%9A&disableEidtor=true
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    int year, month, day, sum;
    for (int i = 0; i < m; i++) {
        cin >> year >> month >> day >> sum;
        day += sum;
        int MonthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            MonthDays[1] = 29;
        }
        while (day > MonthDays[month - 1]) {
            day -= MonthDays[month - 1];
            if (month == 12) {
                month = 1;
                year++;
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                    MonthDays[1] = 29;
                } else {
                    MonthDays[1] = 28;
                }
            } else {
                month++;
            }
        }
        cout << year << '-';
        if (month < 10) cout << '0';
        cout << month << '-';
        if (day < 10) cout << '0';
        cout << day << endl;
    }
    return 0;
}