#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define PLI pair<ll, int>
const int N = 5e5 + 10;
int n, k;
priority_queue<PLI, vector<PLI>, greater<PLI> > q;
// 默认根据 pair<ll, int> 中第一个元素进行升序排列，当 第一个元素相同时，再比较第二个元素 
int pre[N], ne[N];	// 维护左边右边 元素的下标 
ll cnt[N], a[N], t;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) {
		cin >> t;
		q.push({t, i});
		pre[i] = i - 1;
		ne[i] = i + 1; 
	}
	while(q.size() > n - k) {		// 查找k次 
		ll x = q.top().first;		// 最小的一项
		int idx = q.top().second;	// 对应的下标 
		q.pop();
		// 在某一次查询中，队列中 没有进行 左右两边元素进行加 最小值 
		// 这就导致在队列中查询到的最小项，并不是正确的，需要把这一项进行更新，重新取 最小项 
		if(cnt[idx]) {
			q.push({x + cnt[idx], idx}); 
			cnt[idx] = 0;
		} 
		else {
			int left = pre[idx];
			int right = ne[idx];
			cnt[left] += x;
			cnt[right] += x;
			// 将该元素在双向链表中删除
			ne[left] = right; 
			pre[right] = left;
		}
	}
	// 将cnt记录的增加值更新到 a中 
	while(q.size() > 0) {
		ll x = q.top().first;
		int idx = q.top().second;
		q.pop();
		a[idx] = x + cnt[idx];
	} 
	for(int i = 1; i <= n; ++i) {
		if(a[i])
			cout << a[i] << " ";
	}
	return 0;
}
