#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x, sum, maxa = 0, mina = 101;
	double ave;
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> x;
		if(x > maxa)
			maxa = x;
		if(x < mina)
			mina = x;
		sum += x;
	}
	ave = (double)sum / n;
	printf("%d\n%d\n%.2f\n", maxa, mina, ave);
	return 0;
}
