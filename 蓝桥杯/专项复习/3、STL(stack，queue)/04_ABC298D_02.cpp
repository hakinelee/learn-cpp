#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int n, m;
ll int mod = 998244353;
ll int sum[600009];
queue<int> a;

int main() {
	cin >> n;
	sum[0] = 1;
	for(int i = 1; i < 600001; i++) {
		sum[i] = (sum[i - 1] * 10) % mod;
	}
	ll int ans = 1;
	a.push(1);
	for(int i=0; i<n; i++) {
		int k,l;
		cin>>k;
		if(k==1) {
			cin>>l;
			ans=(ans*10+l)%mod;
			a.push(l);
		} else if(k==2) {
			ans=((ans-sum[a.size()-1]*a.front())%mod+mod)%mod;
			a.pop();
		} else if(k==3) {
			cout<<ans<<endl;
		}
	}
	return 0;
}
