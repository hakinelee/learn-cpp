#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5 + 10;
struct data {
	int g;	// ¸öÊı
	int w;	// ×ø±ê 
} a[N];
int n, q;

bool cmp(data x, data y) {
	return x.g < y.g;
}

void bin_search(int x, int l, int r) {
	while(l < r) {
		int mid = (l + r) / 2;
		if(x <= a[mid].g)	
			r = mid;
		else
			l = mid + 1;
	}
	if(a[l].g == x)
		cout << a[l].w << endl;
	else
		cout << 0 << endl;
	return ;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i].g;
		a[i].w = i;
	}
	sort(a + 1, a + n + 1, cmp);
	
	cin >> q;
	for(int i = 1; i <= q; ++i) {
		int temp;
		cin >> temp;
		int l = 1, r = n;
		bin_search(temp, l, r);
	}
	return 0;
}
