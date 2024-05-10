# STL、stack、queue



## 1. 栈 stack

1. `top()`：访问栈顶元素
2. `push()`：入栈
3. `pop()`：删除栈顶元素
4. `size()`：查询栈中元素个数
5. `empty()`：询问栈是否为空



# P1739 表达式括号匹配

```cpp
int main() {
	stack<char> st;
	char c;
	while(cin >> c) {
		if(c == '@')
			break;
		if(c == '(')
			st.push(c);
		if(c == ')') {
			if(st.empty()){
				cout << "NO";
				return 0;
			}
			else
				st.pop();
		}
	}
	if(st.empty())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
```



# P1449 后缀表达式

```cpp
int t = 0;
string s;
stack<int> st;
getline(cin, s);
for(int i = 0; i < s.size(); ++i) {
    if(s[i] <= '9' && s[i] >= '0') 
        t = t * 10 + s[i] - '0';
    else if(s[i] == '.') {
        st.push(t);
        t = 0;
    }
    else if(s[i] == '@') 
        break;
    else {
        int a1 = st.top();
        st.pop();
        int a2 = st.top();
        st.pop();
        if(s[i] == '+') 
            st.push(a1 + a2);
        if(s[i] == '-') 
            st.push(a2 - a1);
        if(s[i] == '*') 
            st.push(a1 * a2);
        if(s[i] == '/') 
            st.push(a2 / a1);
    }
}
cout << st.top();
```



## 2. 队列 queue 先进先出

1. `front()`：访问队首元素
2. `back()`：访问队尾元素
3. `push()`：入队
4. `pop()`：删除队首元素
5. `size()`：查询栈中元素个数
6. `empty()`：询问栈是否为空



# P1996 约瑟夫问题

循环队列

```cpp
queue<int> que;
int n, m;
cin >> n >> m;
for(int i = 1; i <= n; ++i)
    que.push(i);
while(!que.empty()) {
    for(int i = 1; i < m; ++i) {	// 从 1 开始报数
        que.push(que.front());
        que.pop();
    }
    cout << que.front() << " ";		// 当报数到 m 
    que.pop();
}
```



# [ABC298D] Writing a Numeral

思路：

1. 用数字进行计算，在输出为1或者2的时候，对每一次操作都要进行取余操作。
2. 操作为2的时候要特别注意， $ans-sum[a.size()-1]*a.front()$ 这个值可能为负数，**在取余之后要加mod再取余一次**。

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int m = 998244353;
ll qmi(ll a, ll n, ll q) {
	ll res = 1;
	while(n) {
		if(n&1)
			res = res * a % q;
		a = a * a % q;
		n >>= 1;
	}
	return res;
}
int main() {
	int n, t, ans = 1;
	queue<int> q;
	cin >> n;
	q.push(1);
	while(n--) {
		cin >> t;
		if(t == 1) {
			int x;
			cin >> x;
			ans = (ans * 10 + x) % m;
			q.push(x);
		}
		if(t == 2) {
			int k = q.front();
			q.pop();
			ans = (ans - k * qmi(10, q.size(), m) % m + m) % m;
		}
		if(t == 3) {
			cout << ans << endl;
		}
	}
	return 0;
}
```













