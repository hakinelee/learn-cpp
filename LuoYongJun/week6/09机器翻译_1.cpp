#include<bits/stdc++.h>
using namespace std;

bool hashtable[1010];
int main() {
	int m, n;
	cin>>m>>n;
	int ans = 0;
	queue<int> q;
	for(int i = 0; i < n; i++) {
		int x;
		cin>>x;
		if(hashtable[x] == false) {
			hashtable[x] = true;
			if(q.size() < m)
				q.push(x);
			else {
				hashtable[q.front()] = false;
				q.pop();
				q.push(x);
			}
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
