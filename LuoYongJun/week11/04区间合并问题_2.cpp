#include<bits/stdc++.h>
using namespace std;

// ���ص�������
#define ll long long
struct qu{
	ll l, r;	// ������ֵ����ֵ 
} a[100005];

bool cmp_qu(qu x, qu y) {	// ��������˵����� 
	return x.l < y.l;
}

int main() {
	ll n;		// �������Ŀ
	cin>>n; 
	for(ll i = 1; i <= n; i++) {
		cin>>a[i].l>>a[i].r;
	}
	sort(a + 1, a + n + 1, cmp_qu);
	ll first = a[1].l, end = a[1].r;
	for(ll i = 1; i <= n; i++) {
		if(a[i].l > end) {	// ���䲻�ཻ
			cout<<first<<" "<<end<<endl;
			end = max(end, a[i].r);
			first = a[i].l;
			end = a[i].r;
		}
		else {				// �����ཻ 
			end = max(end, a[i].r);
		}
	}
	cout<<first<<" "<<end<<endl;
	return 0;
}
