#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define INF 0x3f3f3f3f
using namespace std;
// 暴力代码：DFS（2^n）

const int N = 1e5 + 10;
int a[N];
int n, ans;

int get_first(int x) {		//获取数字的最高位
	int res = 0;
	while(x) {
		res = x % 10;
		x /= 10;
	}
	return res;
}

int get_final(int x) {		//获取数字的最后一位
	return x % 10;
}

//u表示当前考虑到了第几位。
//last表示，方案中已经选了的最后一个数字是多少
//cnt表示，方案中一共有多少个数字
void dfs(int u, int cnt, int last) {
	if(u >= n) {
		ans = max(ans, cnt);
		return ;
	}
	// 这里可以进行优化：
	// 如果此时剩下的数字总数 + 已经选择的数cnt都没有 当前最大值ans大 ，那就不需要继续往后考虑 
	if(n - u + cnt <= ans) {
		return ;
	}

	//第u位数选，如果选这个数字
	//就必须和前面最后一个数字构成接龙序列。
	if(last == -1 || get_final(last) == get_first(a[u]))
		dfs(u + 1, cnt + 1, a[u]);

	//第u个数不选
	dfs(u + 1, cnt, last);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];

	dfs(0, 0, -1);
	cout << n - ans << endl;
	return 0;
}
