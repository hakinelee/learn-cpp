#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int top;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	char ch;
	while(ch != '@') {
		scanf("%c",&ch);
		if(ch=='(')
			top++;
		if(ch==')')
			if(top>0)
				top--;
			else
			{
				cout<<"NO";
				return 0; 
			}
	}
	if(top==0)
		printf("YES");
	else
		printf("NO");
}
