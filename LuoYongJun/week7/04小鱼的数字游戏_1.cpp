#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll x;
	stack<ll> st;
	while(cin>>x) {
		if(x == 0)
			break;
		else {
			st.push(x);
		}
	}
	while(!st.empty()) {
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}
