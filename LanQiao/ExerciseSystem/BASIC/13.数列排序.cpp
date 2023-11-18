#include<iostream>
#include<stdlib.h>
using namespace std;

int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	qsort(a,n,sizeof(int),cmp);
	for(int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
	return 0;
}