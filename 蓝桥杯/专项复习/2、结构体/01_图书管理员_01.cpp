#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, q, a[N];

void check(int len, int qiu) {
	int temp = pow(10, len);
	for(int i = 1; i <= n; ++i) {
		if(a[i] % temp == qiu) {
			cout << a[i] << endl;
			return ;
		}
	}
	cout << -1 << endl;
	return ;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> q;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];

	sort(a + 1, a + n + 1);
	
	for(int i = 1; i <= q; ++i) {
		int len, qiu;
		cin >> len >> qiu;
		check(len, qiu);
	}
	return 0;
}

