#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	queue<int> q;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin>>x;
		if(x == 1) {
			cin>>y;
			q.push(y);
		}
		if(x == 2) {
			if(!q.size()) {
				cout<<"lan"<<endl;
			}
			else {
				q.pop();
			}
		}
		if(x == 3) {
			if(!q.size()) {
				cout<<"qiao"<<endl;
			}
			else {
				cout<<q.front()<<endl;
			}
		}
		if(x == 4) {
			cout<<q.size()<<endl;
		}
	}
	return 0;
}
