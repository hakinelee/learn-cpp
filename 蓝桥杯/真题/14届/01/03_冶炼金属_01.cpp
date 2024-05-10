#include<bits/stdc++.h> 
using namespace std;

int n, a, b, hi, lo;
int mina = 0, maxa = 1e9;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
		
	cin >> n;
	while(n--) {
		cin >> a >> b;
		hi = a / b;
		if(hi < maxa)
			maxa = hi;
		lo = a / (b + 1) + 1;
		if(lo > mina)
			mina = lo;
	}
	cout << mina << " " << maxa << endl;
	return 0;
}
