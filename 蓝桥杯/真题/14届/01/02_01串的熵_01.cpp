#include <bits/stdc++.h>
using namespace std;

double n = 23333333;
double y = 11625907.5798;

double f(double x) {
    double a = x * 1.0 / n;  // 0出现的占比
    double b = (n - x) * 1.0 / n;  // 1出现的占比
    double res = 0;
	res -= a * log2(a) * x + b * log2(b) * (n - x);
    return res;
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 1; i < n; i++) {
    	if (abs(f(i) - y) < 0.0001) {
            cout << i << endl;
            break;
        } 
	}
    return 0;
}
