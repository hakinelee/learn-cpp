#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a, b, n;
	int mina = 0, maxa = 1e9;
	cin >> n;
	while(n--) {
		cin >> a >> b;
		int hi = a / b;
		if(hi < maxa)
			maxa = hi;
		int lo = a / (b + 1) + 1;
		if(lo > mina)
			mina = lo;
	}
	cout << mina << " " << maxa;
	return 0;
}
