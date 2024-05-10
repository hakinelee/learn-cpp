#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, x;
	cin >> n;
	int sum = 0;
	priority_queue<int, vector<int>, greater<int>> q;
	// greater<int> 从小到大，小根堆 
	// less<int>  从大到小，大根堆 

	for(int i = 1; i <= n; ++i) {
		cin >> x;
		q.push(x);
	}
	while(q.size() > 1) {
		int temp1 = q.top();
		q.pop();
		int temp2 = q.top();
		q.pop();
		sum += temp1 + temp2;
		q.push(temp1 + temp2);
	}
	cout << sum;
	return 0;
}
