#include<bits/stdc++.h>
using namespace std;

// ���ص�����ĸ���
#define ll long long
struct qu {
	ll l, r;	// ������ֵ����ֵ 
} a[100005];
 
bool cmp_qu(qu x, qu y) {	// ��������˵����� 
	return x.l < y.l;
}

int main() {
	ll n;		// �������Ŀ
	cin>>n; 
	for(ll i = 1; i <= n; i++)
		cin>>a[i].l>>a[i].r;
	sort(a+1, a+n+1, cmp_qu);
	ll ans = 0;				// ���ص�����ĸ���
	ll end = -1;
	for(ll i = 1; i <= n; i++) {
		if(a[i].l > end) {	// ���䲻�ཻ 
			ans++;
			end = max(end, a[i].r);
		}
		else {				// �����ཻ 
			end = max(end, a[i].r);
		}
	} 
	cout<<ans;
	return 0;
}
