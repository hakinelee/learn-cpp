#include<bits/stdc++.h>
using namespace std;

const int N = 305;
struct Node {
	int chin, math, eng, sum;
	int idx;
} a[N];

bool cmp(Node x, Node y) {
	if(x.sum != y.sum)
		return x.sum > y.sum;
	else if(x.chin != y.chin)
		return x.chin > y.chin;
	else
		return x.idx < y.idx;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n; 
	for(int i = 1; i <= n; ++i) {
		cin >> a[i].chin >> a[i].math >> a[i].eng;
		a[i].idx = i;
		a[i].sum = a[i].chin + a[i].math + a[i].eng;
	}
	sort(a + 1, a + n + 1, cmp);
	for(int i = 1; i <= 5; ++i)
		cout << a[i].idx << " " << a[i].sum << endl;
	return 0;
}
