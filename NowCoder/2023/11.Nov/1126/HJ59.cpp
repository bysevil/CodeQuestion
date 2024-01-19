// https://www.nowcoder.com/practice/e896d0f82f1246a3aa7b232ce38029d4?tpId=37&&tqId=21282&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
#include <iostream>
#include <array>
using namespace std;

int main() {
    string str; cin >> str;
    array<int,26> ary; ary.fill(0);
    for(auto e : str) ary[e-'a']++;
    for(auto e : str){
        if(ary[e-'a'] == 1) {
            cout << e;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
