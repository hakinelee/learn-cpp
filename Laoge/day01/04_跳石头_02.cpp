#include<bits/stdc++.h>
using namespace std;

#define ll long long 
const int N =  
int len, m, n, a[N];
bool check(int x) {
	int cnt = 0;		// 被抽走的石头 
	int i = 0, now = 0;	// i表示目标位置，now为当前位置。
	while(i < n + 1) {
		i++;
		if(a[i] - a[now] < mid)	 //两石头间距离小于mid，mid不是最短距离，不满足，移走该石头 
			cnt++;
		else	//符合，跳过去 
			now = i;
	}
	if(cnt <= m) 
		return 1;	//移走的石头个数小于 M，就能保证了任意两剩下的石头间距大于等于最短距离mid，那移走M个，更能保证 
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> len >> n >> m;
	for(int i = 0; i <= n; ++i)
		cin >> a[i];
	a[0] = 0;
	a[n + 1] = len;
	
	if(n == 0) {
		cout << 0;
		return 0;
	}
	int l = 0, r = len;
	while(l < r) {
		int mid = l + r + 1 >> 1;
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l;
	return 0;
}
