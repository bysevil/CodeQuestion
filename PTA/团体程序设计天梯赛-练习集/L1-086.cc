#include<iostream>

using namespace std;

string ansstr(string& a){
    string s;
    for (size_t i = 1; i < a.size(); i++) {
        if (a[i] % 2 == a[i-1] % 2) {
            s += max(a[i], a[i-1]);
        }
    }
    return s;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string ans1 = ansstr(s1);
    string ans2 = ansstr(s2);
   
    cout << ans1 << endl;
    if(ans1 != ans2){
        cout << ans2 << endl;
    }
    return 0;
}