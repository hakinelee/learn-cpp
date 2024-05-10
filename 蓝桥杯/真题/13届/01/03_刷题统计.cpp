#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll a, b, n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ll a, b, n, j = 1, sum = 0, ans = 0;
	cin >> a >> b >> n;
	ll s = 5 * a + 2 * b;	// 一周做的题数
	ll s1 = n % s;			// 剩的题数
	ll s2 = n / s;  		// 做了几周 
	while(s1 > sum) {
		if(j >= 1 && j <= 5) {
			sum += a;
			j++;
		}
		else if(j == 6) {
			sum += b;
			j++;
		}
		else if(j == 7) {
			sum += b;
			j = 1;
		}
		ans++;
	}
	cout << s2 * 7 + ans << endl;
	return 0;
}
