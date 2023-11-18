#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	
	string str[n];
	for(int i = 0; i < n; i++)
		cin >> str[i];
	
	string a; cin >> a;
	
	for(int i = 0; i < n; i++){
		if(str[i] == a) {
			cout << i+1;
			return 0;
		}
	}
	cout << -1;
	return 0;
}