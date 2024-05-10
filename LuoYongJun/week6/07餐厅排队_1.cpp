#include<bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	queue<int> que;
	for(int i = 0; i < q; i++) {
		int x, y;
		cin>>x;
		if(x == 1) {
			cin>>y;
			que.push(y);
		}
		if(x == 2) {
			que.pop();
		}
		if(x == 3) {
			cout<<que.front()<<" "<<que.back()<<endl;
		}
	}
	return 0;
}
