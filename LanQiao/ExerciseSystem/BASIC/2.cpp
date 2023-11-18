#include<iostream>
using namespace std;

int main() {
	string str = "00000";
	cout << str << endl;
	while(str != "11111"){
		str[4] += 1;
		for(int i = 4; i >= 0; i--){
			if(str[i] == '2'){
				str[i] = '0';
				str[i-1] += 1; 
			}
		}
		cout << str << endl;
	}
}