//https://www.nowcoder.com/practice/769d45d455fe40b385ba32f97e7bcded?tpId=37&&tqId=21296&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    while (cin >> year >> month >> day) { 
        int MonthDays[] ={31,28,31,30,31,30,31,31,30,31,30,31};
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            MonthDays[1] = 29;
        } 
        int ans = day;
        for(int i = 0;i < month-1; i++){
            ans += MonthDays[i];
        }
        cout << ans << endl;
    }
    return 0;
}