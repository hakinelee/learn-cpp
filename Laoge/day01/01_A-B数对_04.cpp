#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 200010;
int a[N], n, c, st;
ll cnt;

int main() {
	cin >> n >> c;
	for(int i = 1; i <= n; ++i) 
		cin >> a[i];
	sort(a + 1, a + 1 + n);
	
	for(int i = 1; i < n; i++) {	//遍历每一个B 
		int l = i + 1, r = n;		//寻找A第一次出现的位置
		while(l < r) { 				//因为是第一次出现，尽量往左，模板1
			int mid = l + r >> 1;
			if(a[mid] - a[i] >= c) 	//判断：在目标值的右边，满足，往左来
				r = mid;
			else 
				l = mid + 1;
		}
		if(a[l] - a[i] == c)  		//能找到C就继续 
			st = l;
		else 
			continue;
		
		l = st - 1, r = n;			//查找A最后出现的位置 
		while(l < r) { 				//因为是最后一次出现，尽量往右，模板2
			int mid = l + r + 1 >> 1;
			if(a[mid] <= a[st])  	//判断：在目标值的左边，满足，往右去
				l = mid;
			else 
				r = mid - 1;
		}
		cnt += l - st + 1;			//最后出现的位置减首次出现的位置就是区间长度，即A的个数 
	}
	cout << cnt;
	return 0;
} 
