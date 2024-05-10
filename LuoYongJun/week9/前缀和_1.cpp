#include<bits/stdc++.h> 
using namespace std;
#define ll long long
/**
 * 长度n 的数组a, q次询问， a在[l, r]的和 
 * 输入：
 * n (1 <= n <= 10^5) 
 * n个整数表示a（-10^9 <= a[i] <= 10^9） 
 * 整数q（1 <= q <= 10^5） 
 * q行，每行两个整数li, ri（1 <= li, ri <= n） 
 * 示例：
 * 输入： 
 * 5
 * 1 2 3 4 5
 * 2
 * 1 3
 * 2 5
 * 输出： 
 * 6
 * 14
 */

int main() {
	ll n, q;
	cin>>n;
	
	vector<ll> a(n + 1);
	for(int i = 1; i <= n; i++)	
		cin>>a[i];
	
	vector<ll> prefix(n + 1, 0);
	for(int i = 1; i <= n; i++)
		prefix[i] = prefix[i-1] + a[i];
	cin>>q;
	while(q--) {
		ll l, r;
		cin>>l>>r;
		cout<<prefix[r] - prefix[l-1]<<endl;
	}
	return 0;
}
