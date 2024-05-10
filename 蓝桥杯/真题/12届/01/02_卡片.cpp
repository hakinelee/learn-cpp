#include<bits/stdc++.h>
using namespace std;

int a[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 1; ; ++i) {
		int temp = i;
		while(temp) {
			a[temp % 10]++;
			temp = temp / 10;
		}
		for(int j = 0; j < 10; ++j) {
			if(a[j] > 2021) {
				cout << i - 1 << endl;	// i-1ÎÞ·¨Êä³ö 
				return 0;
			}
		}
	}
	return 0;
}
