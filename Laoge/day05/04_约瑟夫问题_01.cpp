#include<bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	queue<int> q;
	for(int i = 1; i <= n; ++i)
		q.push(i);	
	while(q.empty() == 0) {
		for(int i = 1; i < m; ++i) { // Ñ­»·±¨Êý 
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
        q.pop();
	}
	return 0;
}
