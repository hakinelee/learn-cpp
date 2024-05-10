#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t, x;
	cin >> t;
	queue<int> q;
	while(t--) {
		cin >> x;
		if(x == 1) {
			int temp;
			cin >> temp;
			q.push(temp);
		}
		if(x == 2) {
            if(q.empty())
                cout << "ERR_CANNOT_POP" << endl;
			else
                q.pop();
        }
		if(x == 3) {
            if(q.empty())
                cout << "ERR_CANNOT_QUERY" << endl;
            else
			    cout << q.front() <<endl;
        }
		if(x == 4)
			cout << q.size() << endl;
	}
	return 0;
}
