#include<bits/stdc++.h>
using namespace std;
// ��׳� 
#define ll long long
ll test(ll n) {	//���ĩβ�м����� 
	ll cnt = 0;
	while(n) {
		n = n / 5;
		cnt = cnt + n;
	}
	return cnt;
}

int main() {
	ll k;	// β0���� 
	cin>>k;
	for(ll n=5; ; n += 5) {
		ll cnt = test(n);	//n�Ľ׳���cnt��0
		cout<<"cnt="<<cnt<<endl;
		if(cnt == k) {
			cout<<n;
			break;
		}
		if(cnt > k){
			cout<<-1;
			break;
		}
	}
	return 0;
}
