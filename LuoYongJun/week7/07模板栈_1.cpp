#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
// 本题中 x 的范围是 [0, 2^64 - 1]，
// 需要使用 unsigned long long int存储
int main() {
	ll t, n, a1;
	string a;
	cin>>t;
	stack<ll> s;
	while(t--){
		while(!s.empty())	//当栈不为空，弹出栈顶 
			s.pop();
		cin>>n;
	    while(n--){
	    	cin>>a;
	    	if(a == "push") {
	    		cin>>a1;
	    		s.push(a1);
			}
	    	
			if(a=="pop" && !s.empty()){
	    		s.pop() ;
			}
			else if(a == "pop" && s.empty())
				cout<<"Empty"<<'\n';
			
			if(a == "query" && !s.empty()) {
				cout<<s.top() <<'\n';
			}
			else if(a == "query" && s.empty())
				cout<<"Anguei!"<<'\n';
			
			if(a == "size")
				cout<<s.size() <<'\n';
		} 
	}
	return 0;
}
