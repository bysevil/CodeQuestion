// https://www.nowcoder.com/practice/b1f7a77416194fd3abd63737cdfcf82b?tpId=69&&tqId=29669&rp=1&ru=/activity/oj&qru=/ta/hust-kaoyan/question-ranking
#include <iostream>
using namespace std;

int main() {
    int year, day;
    while (cin >> year >> day) {
        int MonthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            MonthDays[1] = 29;
        }
        int month = 0;
        for(; day > MonthDays[month]; month++){
            day -= MonthDays[month];
        }
        cout << year << '-';
        if(month < 10) cout << '0';
        cout << month + 1 << '-';
        if(day < 10) cout << '0';
        cout << day << endl;
    }
}