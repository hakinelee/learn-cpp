#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define PLI pair<ll, int>
const int N = 5e5 + 10;
int n, k;
priority_queue<PLI, vector<PLI>, greater<PLI> > q;
// Ĭ�ϸ��� pair<ll, int> �е�һ��Ԫ�ؽ����������У��� ��һ��Ԫ����ͬʱ���ٱȽϵڶ���Ԫ�� 
int pre[N], ne[N];	// ά������ұ� Ԫ�ص��±� 
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
	while(q.size() > n - k) {		// ����k�� 
		ll x = q.top().first;		// ��С��һ��
		int idx = q.top().second;	// ��Ӧ���±� 
		q.pop();
		// ��ĳһ�β�ѯ�У������� û�н��� ��������Ԫ�ؽ��м� ��Сֵ 
		// ��͵����ڶ����в�ѯ������С���������ȷ�ģ���Ҫ����һ����и��£�����ȡ ��С�� 
		if(cnt[idx]) {
			q.push({x + cnt[idx], idx}); 
			cnt[idx] = 0;
		} 
		else {
			int left = pre[idx];
			int right = ne[idx];
			cnt[left] += x;
			cnt[right] += x;
			// ����Ԫ����˫��������ɾ��
			ne[left] = right; 
			pre[right] = left;
		}
	}
	// ��cnt��¼������ֵ���µ� a�� 
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
