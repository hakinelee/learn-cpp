#include<bits/stdc++.h>
using namespace std;
#define ll long long    // ��long long����int�ķ�Χ��
ll fastPow(ll a, ll n, ll m) {           // a^n % m
    if(n == 0)   
		return 1;             //���� a^0 = 1
    if(n == 1)   
		return a % m;
    ll t = fastPow(a, n / 2, m);         		  // ����
    if(n % 2 == 1) 
		return (t % m * t % m) * a % m;  	  // ������a
    else    
		return t % m * t % m ;                // ż����a
}
int main() {
    ll a, n, m;   
	cin >> a >> n >> m;   
    printf("%lld^%lld mod %lld=%lld", a, n, m, fastPow(a, n, m));
    return 0;
}

