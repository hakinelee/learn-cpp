#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll n;
	cin >> n;
	while(n) {
		cout << n << " ";
		n /= 2;
	}
	return 0;
}
