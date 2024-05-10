#include<bits/stdc++.h>
using namespace std;

#define ll long long
int k, t;
string s;
char a, b;
ll ans;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> k;
	cin >> s;
	cin >> a >> b;
	if(k > s.size()) {
		cout << -1 << endl;
		return 0;
	}
	for(int i = 0, j = k - 1; j < s.size(); i++, j++) {
		if(s[i] == a)
			t++;
		if(s[j] == b)
			ans += t;
	}
	cout << ans << endl;
	return 0;
}
