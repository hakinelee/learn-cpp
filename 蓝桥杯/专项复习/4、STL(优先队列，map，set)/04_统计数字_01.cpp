#include <bits/stdc++.h>
using namespace std;

const int maxn = 222222;
map<int, int> mp;
int n, x, p[maxn];

bool cmp(pair<int, int> x, pair<int, int> y){
	return x.second < y.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> x;
		mp[x]++;
	}

	map<int, int>::iterator it;
	it = max_element(mp.begin(),mp.end(),cmp);
	for(it = mp.begin(); it != mp.end(); it++)
		cout << it -> first << " " << it -> second << endl;
	return 0;
}
