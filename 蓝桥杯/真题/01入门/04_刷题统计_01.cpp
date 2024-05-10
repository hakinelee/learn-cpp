#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll a, b, n, sum = 0, cnt = 1;
	cin >> a >> b >> n;
	while(sum <= n) {
		if(cnt % 7 <= 5 && cnt % 7 >= 1)
			sum += a;
		else
			sum += b;
		cnt++;
	}
	cout << cnt - 1 << endl;
	return 0;
}
