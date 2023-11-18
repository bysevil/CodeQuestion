#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
	int r; cin >> r;
	
	double ans = atan(1)*4*r*r;
	
	cout << fixed << setprecision(7) << ans;
	return 0;
}