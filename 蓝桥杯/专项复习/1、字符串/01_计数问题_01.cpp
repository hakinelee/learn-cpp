#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x;
	cin >> n >> x;
	ll cnt = 0;
	for(int i = 1; i <= n; ++i) {
		string s = to_string(i);
		for(int j = 0; j <= s.size(); ++j)
			if(s[j] - '0' == x)
				cnt++;
	}
	cout << cnt;
	string s("dog bird chicken bird cat");
	if(s.find("chicken",0)!=-1)
		cout << s.find("chicken") << endl;
	return 0;
}

