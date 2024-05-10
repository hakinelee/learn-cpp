#include<bits/stdc++.h>
using namespace std;

int n = 23333333;
double y = 11625907.5798; 
double f(int x) {
	double a = x * 1.0 / n;				// 0 的占比
	double b = (n - x) * 1.0 / n;		// 1 的占比
	double res = 0;
	res = 0 - a * x * log2(a) - b * (n - x) * log2(b);
	return res;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 1; i < n; ++i) {
		if(abs(f(i) - y) < 0.0001) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
