#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int m = 998244353;
ll qmi(ll a, ll n, ll q) {
	ll res = 1;
	while(n) {
		if(n&1)
			res = res * a % q;
		a = a * a % q;
		n >>= 1;
	}
	return res;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, t, ans = 1;
	queue<int> q;
	cin >> n;
	q.push(1);
	while(n--) {
		cin >> t;
		if(t == 1) {
			int x;
			cin >> x;
			ans = (ans * 10 + x) % m;
			q.push(x);
		}
		if(t == 2) {
			int k = q.front();
			q.pop();
			ans = (ans - k * qmi(10, q.size(), m) % m + m) % m;
		}
		if(t == 3) {
			cout << ans << endl;
		}
	}
	return 0;
}
