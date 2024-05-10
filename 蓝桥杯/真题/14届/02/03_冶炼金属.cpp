#include<bits/stdc++.h>
using namespace std;

int n, a, b, maxa = 1e9, mina = 0;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	while(n--) {
		cin >> a >> b;
		int hi = a / b;	 // 最大转化率
		if(hi < maxa) 
			maxa = hi;
		int lo = a / (b + 1) + 1;
		if(lo > mina)
			mina = lo;
	}
	cout << mina << " " << maxa << endl;
	return 0;
}
