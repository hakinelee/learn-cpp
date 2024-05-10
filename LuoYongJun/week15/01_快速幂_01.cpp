#include<bits/stdc++.h>
using namespace std;
#define ll long long    // 用long long，比int的范围大
ll fastPow(ll a, ll n, ll m) {           // a^n % m
    if(n == 0)   
		return 1;             //特判 a^0 = 1
    if(n == 1)   
		return a % m;
    ll t = fastPow(a, n / 2, m);         		  // 分治
    if(n % 2 == 1) 
		return (t % m * t % m) * a % m;  	  // 奇数个a
    else    
		return t % m * t % m ;                // 偶数个a
}
int main() {
    ll a, n, m;   
	cin >> a >> n >> m;   
    printf("%lld^%lld mod %lld=%lld", a, n, m, fastPow(a, n, m));
    return 0;
}

