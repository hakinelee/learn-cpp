#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
// ������ x �ķ�Χ�� [0, 2^64 - 1]��
// ��Ҫʹ�� unsigned long long int�洢
int main() {
	ll t, n, a1;
	string a;
	cin>>t;
	stack<ll> s;
	while(t--){
		while(!s.empty())	//��ջ��Ϊ�գ�����ջ�� 
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
