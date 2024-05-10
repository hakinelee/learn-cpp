#include<bits/stdc++.h>
using namespace std;

//#define ll long long
const int N = 1e4 + 10;
int a[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x;
	cin >> n;
	int sum = 0;

	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for(int j = 1; j < n; ++j) {
		int temp1 = a[j];
		a[j] = 0;
		int temp2 = a[j+1];
		a[j+1] = 0;
		sum += temp1 + temp2;
		a[j+1] = temp1 + temp2;
		sort(a + 1 + 1, a + n + 1);
	}
	cout << sum;
	return 0;
}
