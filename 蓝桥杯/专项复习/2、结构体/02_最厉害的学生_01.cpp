#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
struct Node {
	string name;
	int chin, math, eng, sum;
	int idx;
} a[N];

bool cmp(Node x, Node y) {
	if(x.sum != y.sum)
		return x.sum > y.sum;
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
		cin >> a[i].name;
		cin >> a[i].chin >> a[i].math >> a[i].eng;
		a[i].sum = a[i].chin + a[i].math + a[i].eng;
		a[i].idx = i;
	}
	sort(a + 1, a + n + 1, cmp);
	cout << a[1].name << " " << a[1].chin << " " << a[1].math << " " << a[1].eng;
	return 0;
}
