# STL（优先队列 / map / set）



## 1. 优先队列 priority_queue

优先队列 `priority_queue` 是一种 [堆](https://oi-wiki.org/ds/heap/)，一般为 [二叉堆](https://oi-wiki.org/ds/binary-heap/)。

```cpp
priority_queue<Type> queName;

// 以下所有函数均为常数复杂度
q.top();	// 访问队列第一个元素（优先队列不能为空）
q.empty();	// 询问队列是否为空，空则返回1，否则返回0
q.size();	// 查询队列中元素个数

// 以下所有函数均为对数复杂度
q.push(k);	// k入队，并对底层容器排序
q.pop();	// 删掉q的第一个元素
```



# P1090 [NOIP2004 提高组] 合并果子 / [USACO06NOV] Fence Repair G

```cpp
const int N = 1e4 + 10;
int a[N];
int main() {
	int n, x;
	cin >> n;
	int sum = 0;
	for(int i = 1; i <= n; ++i)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for(int j = 1; j < n; ++j) {
		int temp1 = a[j];
		a[j] = 0;
		int temp2 = a[j+1];
		a[j+1] = 0;
		sum += temp1 + temp2;
		a[j+1] = temp1 + temp2;
		sort(a + 1 + 1, a + n + 1);
	}
	cout << sum;
	return 0;
}
```

```cpp
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
```



# [ABC212D] Querying Multiset

操作 $2$ ：需要给堆中所有元素加 $X$。不难想到不改变堆中的元素，而是给之后插入的所有元素减去 $X$ ，相对差不改变。

操作 $1$ ：可以给当前插入的元素减去之前所有 $X$ 的和。

操作 $3$ ：给当前取出的元素加上之前所有的 $X$ ，可以类似地看做一个差分。

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	priority_queue<ll, vector<ll>, greater<ll> > que;
	ll q, t, x;
	ll k = 0, a = 0;	// 区间修改的总和 k ,临时值 a 
	cin >> q;
	while(q--) {
		cin >> t;
		if(t == 1) {
			cin >> x;
			a = x - k;
			que.push(a);
		}
		if(t == 2) {
			cin >> x;
			k += x;
		}
		if(t == 3) {
			a = que.top();
			que.pop();
			cout << a + k << endl;
		}
	}
	return 0;
}
```







## 2. map














## 3. set









