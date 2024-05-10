#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll t, s, m, h;
	cin >> t;
	t = t / 1000;	// ms -> s
	s = t % 60;		// ȡ s
	t = t / 60;		// s -> m 
	m = t % 60; 	// ȡ min
	t = t / 60;		// m -> h
	h = t % 24;		// ȡ h
	if(h <= 9)
		cout << 0 << h << ":";
	else
		cout << h << ":";
	if(m <= 9)
		cout << 0 << m << ":";
	else
		cout << m << ":";
	if(s <= 9)
		cout << 0 << s;
	else
		cout << s;
	return 0;
}
