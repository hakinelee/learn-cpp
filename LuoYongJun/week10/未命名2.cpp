#include<bits/stdc++.h>
using namespace std;
// 求阶乘 
#define ll long long
ll test(ll n) {	//检查末尾有几个零 
	ll cnt = 0;
	while(n) {
		n = n / 5;
		cnt = cnt + n;
	}
	return cnt;
}

int main() {
	ll k;	// 尾0个数 
	cin>>k;
	for(ll n=5; ; n += 5) {
		ll cnt = test(n);	//n的阶乘有cnt个0
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
