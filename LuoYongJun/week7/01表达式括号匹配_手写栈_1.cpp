#include<bits/stdc++.h>
using namespace std;

const int N = 265;
struct mystack {
	int a[N];	 // ģ��ջ
	int t = -1;	 // ջ��λ�ã���ʼջΪ�գ��ó�ֵΪ-1
	void push(int data) {	// ��ջ 
		a[++t] = data;
	}
	int top() {		// ��ջ���������� 
		return a[t];
	}
	void pop() {	// ����ջ�� 
		if(t > -1) {
			t--;
		}
	}
	int size() {	// ջ��Ԫ�ص����� 
		return t + 1;
	}
	int empty() {	// ��ջΪ�գ�����1 
		return t == -1 ? 1 : 0;
	}
} st;

int main() {
	char x;
	while(cin>>x) {		// ѭ������ 
		if(x == '@')	// ����Ϊ@ֹͣ 
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
