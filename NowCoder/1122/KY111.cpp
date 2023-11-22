//https://www.nowcoder.com/practice/ccb7383c76fc48d2bbc27a2a6319631c?tpId=62&&tqId=29468&rp=1&ru=
//转换计算
#include <iostream>
using namespace std;

int main() {
    int Date1,Date2;
    while (cin >> Date1 >> Date2) { 
        if(Date2 > Date1)
            Date2 ^= Date1; Date1 ^= Date2; Date2 ^= Date1;
        
        int MonthDays[] ={31,28,31,30,31,30,31,31,30,31,30,31};
        int year1 = Date1 / 10000; int month1 = Date1 % 10000 / 100; int day1 = Date1 % 100;
        int year2 = Date2 / 10000; int month2 = Date2 % 10000 / 100; int day2 = Date2 % 100;

        if((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0){
            MonthDays[1] = 29;
        } 

        int ans = 1;
        while(year1 != year2 || month1 != month2 || day1 != day2){
            day1--;ans++;
            if(day1 == 0){
                month1--;
                if(month1 == 0){
                    year1--;month1 = 12;
                    if((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0){
                        MonthDays[1] = 29;
                    }else{
                        MonthDays[1] = 28;
                    } 
                }
                day1 = MonthDays[month1-1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// 直接计算,没做闰年判断（通过了）
#include <iostream>
using namespace std;

int main() {
    int Date1,Date2;
    while (cin >> Date1 >> Date2) { 
        if(Date2 > Date1){
            Date2 ^= Date1; Date1 ^= Date2; Date2 ^= Date1;
        }
        int MonthDays[] ={31,28,31,30,31,30,31,31,30,31,30,31};
        int ans = 1;
        while(Date1 != Date2){
            Date1--; ans++;
            if(Date1 % 100 == 0){
                Date1 -= 100;
                if(Date1 % 10000 / 100 == 0)
                    Date1 -= 8800;
                Date1 += MonthDays[Date1 % 10000 / 100 -1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}