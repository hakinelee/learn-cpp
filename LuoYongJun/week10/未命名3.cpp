#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n) {
    ll cnt = 0;
    while(n) 
		cnt += (n /= 5);  
    return cnt;
}
int main(){
    ll k; 
	cin>>k;
    ll l = 0, r = 1e19;
	while(l < r) {
		ll mid = (l+r)>>1;
		if(check(mid) >= k)
			r = mid;
		else
			l = mid + 1;
	}
	if(check(r) == k)
		cout<<r;
	else
		cout<<-1;
    return 0;
}
