#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "123";
	int lena = a.size();	// 字符串a的长度 
	cout<<"字符串a的长度: "<<lena<<endl;
	int b[lena];
	
	cout<<"输出a："<<endl;
	for(int i=0; i<a.size(); i++) {
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
		cout<<"*******"<<endl;
	}

	cout<<"输出b："<<endl;
	for(int i=0; i<lena; i++)
        b[lena-1-i] = a[i] - '0';
    for(int i=0; i<a.size(); i++) {
		cout<<"b["<<i<<"] = "<<b[i]<<endl;
		cout<<"*******"<<endl;
	}
	return 0;
} 
