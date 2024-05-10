#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p = 1e9 + 7;
ll f(ll x) {
	if(x == 1 || x == 2)
		return 1;
	return (f(x - 1) + f(x - 2)) % p;
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll k;
	cin >> k;
	cout << f(k) << endl;
	return 0;
}
