#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll t;
	cin >> t;
	t = t / 1000;	// ms -> s 
	ll s = t % 60;
	t = t / 60;		// s -> min
	ll min = t % 60;
	t = t / 60;		// min -> hour
	ll h = t % 24;
	if(h < 10)
		cout << "0";
	cout << h << ":";
	if(min < 10)
		cout << "0";
	cout << min << ":";
	if(s < 10)
		cout << "0";
	cout << s << endl;
	return 0;
}
