#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	priority_queue<ll, vector<ll>, greater<ll> > que;
	ll q, t, x;
	ll sum = 0, a = 0;	// 区间修改的总和 sum ,临时值 a 
	cin >> q;
	while(q--) {
		cin >> t;
		if(t == 1) {
			cin >> x;
			a = x - sum;
			que.push(a);
		}
		if(t == 2) {
			cin >> x;
			sum += x;
		}
		if(t == 3) {
			cout << que.top() + k << endl;
			que.pop();
		}
	}
	return 0;
}
