#include<bits/stdc++.h>
using namespace std;

const int N = 265;
struct mystack {
	int a[N];	 // 模拟栈
	int t = -1;	 // 栈顶位置，初始栈为空，置初值为-1
	void push(int data) {	// 入栈 
		a[++t] = data;
	}
	int top() {		// 读栈顶，不弹出 
		return a[t];
	}
	void pop() {	// 弹出栈顶 
		if(t > -1) {
			t--;
		}
	}
	int size() {	// 栈内元素的数量 
		return t + 1;
	}
	int empty() {	// 若栈为空，返回1 
		return t == -1 ? 1 : 0;
	}
} st;

int main() {
	char x;
	while(cin>>x) {		// 循环输入 
		if(x == '@')	// 输入为@停止 
			break;
		if(x == '(')	//  
			st.push(x);
		if(x == ')')
			if(st.empty()) {
				cout<<"NO";
				return 0;
			} 
			else {
				st.pop();
			}
	}
	if(st.empty()) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;
}
