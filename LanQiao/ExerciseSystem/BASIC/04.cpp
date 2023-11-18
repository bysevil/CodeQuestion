#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	
    int mod = 10007;
    if(n == 0) {
		cout << 0;
		return 0;
	}
	int a = 0,b = 1,c = 1;
	for(int i = 2; i < n; i++){
        a = b;
        b = c;
		c = (a + b) % mod;
	}
	cout << c;
	return 0;
}