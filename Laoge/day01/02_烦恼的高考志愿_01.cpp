#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int o = 1E6 + 10;
int a[o], b[o];		// a[i]学校预计分数线, b[i]学生估分 
int m, n;		// m 学校数, n 学生数
ll sum;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
		cin >> b[i];
	sort(a + 1, a + m + 1);		// 学校预计分数线排序
	
	for(int i = 1; i <= n; i++) {
		if(b[i] <= a[1]) {
			sum += a[1] - b[i];
			continue;
		}
		if(b[i] >= a[m]) {
			sum += b[i] - a[m];
			continue;
		}
		int l = 1, r = m;
		while(l < r) {		// 二分 
			int mid = (l + r) >> 1;	// 向下取整 
			if(a[mid] >= b[i]) 
				r = mid;
			else
				l = mid + 1;
		}
		if(a[l] == b[i])
			continue;
		// abs() 绝对值 
		sum += min(abs(b[i] - a[l]), abs(b[i] - a[l - 1])); 
	}
	cout << sum;
	return 0;
}
