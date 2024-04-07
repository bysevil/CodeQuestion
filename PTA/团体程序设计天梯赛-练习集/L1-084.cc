#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    a += b;
    b = a;
    while(--a){
        b *= a;
    }
    cout << b << endl;
    return 0;
}