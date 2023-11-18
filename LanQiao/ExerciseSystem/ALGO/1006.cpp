#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int max = 0;
			if(i > 0 && a[i-1][j] > max) max = a[i-1][j];
			if(j > 0 && a[i][j-1] > max) max = a[i][j-1];
			a[i][j] += max; 
		}
	}
	
	cout << a[n-1][n-1];
	return 0;
}