#include<bits/stdc++.h>
using namespace std;
const int N = 2010;
int a[N];
int cnt;
int n, c;

int main() {
	cin>>n>>c;
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = n; i > 0; i--) {
		for(int j = i - 1; j > 0; j--) {
			if(a[i] - a[j] == c) {
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
