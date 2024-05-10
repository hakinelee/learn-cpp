#include<bits/stdc++.h>
using namespace std;
int m, n, x, cnt;
bool hashtable[1010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		
	cin >> m >> n;
	queue<int> q;
	while(n--) {
		cin >> x;
		if(hashtable[x] == 0) {	// 没出现 ,新单词 
			hashtable[x] = 1;
			cnt++;
			if(q.size() >= m) {
				hashtable[q.front()] = 0;
				q.pop();
			}	
			q.push(x);
		}
	}
	cout << cnt;
	return 0;
}
