#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10; 
ll n, m, a[N], sum, maxa;
bool check(ll x) {
	ll cnt = 1, summ = 0;
	for(int i = 1; i <= n-1; i++)	{
		summ += a[i];
		if(summ + a[i+1] > x) {//�������� "������С��������"���Ǿͷֶ� 
			cnt++;
			summ = 0;
		}
	}
	// �ܵĶ���С�ڵ�����Ҫ�Ķ�����������������midΪÿ�ε����ֵ��
	// ��ô��ּ��Σ��϶��������� 
	if(cnt <= m) 	
		return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
		if(a[i] > maxa)
			maxa = a[i];
	}	
	
	
	ll l = maxa, r = sum;
	while(l < r) {
		ll mid = l + r >> 1;
		if(check(mid))
			r = mid;
		else
			l = mid + 1;
	}
	cout << l;
	return 0;
}
